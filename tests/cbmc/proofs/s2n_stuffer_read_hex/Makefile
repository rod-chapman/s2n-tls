# Copyright 2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License"). You may not use
# this file except in compliance with the License. A copy of the License is
# located at
#
#     http://aws.amazon.com/apache2.0/
#
# or in the "license" file accompanying this file. This file is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing permissions and
# limitations under the License.

###########
#Use the default set of CBMC flags
CHECKFLAGS +=

PROOF_UID = s2n_stuffer_read_hex
HARNESS_ENTRY = $(PROOF_UID)_harness
HARNESS_FILE = $(HARNESS_ENTRY).c

#USE_FUNCTION_CONTRACTS =
#CHECK_FUNCTION_CONTRACTS=$(PROOF_UID)
FUNCTION_NAME = $(PROOF_UID)
APPLY_LOOP_CONTRACTS=on
USE_DYNAMIC_FRAMES=1
NONDET_STATIC = --nondet-static-exclude _s2n_debug_info
NONDET_STATIC += --nondet-static-exclude s2n_mem_init_cb
NONDET_STATIC += --nondet-static-exclude s2n_mem_malloc_cb
NONDET_STATIC += --nondet-static-exclude s2n_mem_free_cb

# Use standard SAT backend, not SMT
EXTERNAL_SAT_SOLVER=
#CBMCFLAGS=--bitwuzla

CBMC_OBJECT_BITS = 10

EXPORT_FILE_LOCAL_SYMBOLS=
VERBOSE=on


PROOF_SOURCES += $(PROOFDIR)/$(HARNESS_FILE)
PROOF_SOURCES += $(PROOF_SOURCE)/cbmc_utils.c
PROOF_SOURCES += $(PROOF_SOURCE)/make_common_datastructures.c
PROOF_SOURCES += $(PROOF_STUB)/s2n_calculate_stacktrace.c
PROOF_SOURCES += $(PROOF_STUB)/mlock.c
PROOF_SOURCES += $(PROOF_STUB)/munlock.c
PROOF_SOURCES += $(PROOF_STUB)/madvise.c
PROOF_SOURCES += $(PROOF_STUB)/darwin_check_fd_set_overflow.c

PROJECT_SOURCES += $(SRCDIR)/error/s2n_errno.c
PROJECT_SOURCES += $(SRCDIR)/stuffer/s2n_stuffer_hex.c
PROJECT_SOURCES += $(SRCDIR)/stuffer/s2n_stuffer.c
PROJECT_SOURCES += $(SRCDIR)/utils/s2n_blob.c
PROJECT_SOURCES += $(SRCDIR)/utils/s2n_ensure.c
PROJECT_SOURCES += $(SRCDIR)/utils/s2n_mem.c
PROJECT_SOURCES += $(SRCDIR)/utils/s2n_safety.c

UNWINDSET += s2n_stuffer_read_hex.6:1
UNWINDSET += s2n_stuffer_read_hex.7:1

include ../Makefile.common
