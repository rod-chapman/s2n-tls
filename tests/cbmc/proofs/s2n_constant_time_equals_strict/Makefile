#
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


CBMCFLAGS +=

PROOF_UID = s2n_constant_time_equals_strict
HARNESS_ENTRY = $(PROOF_UID)_harness
HARNESS_FILE = $(HARNESS_ENTRY).c

PROOF_SOURCES += $(PROOFDIR)/$(HARNESS_FILE)

PROJECT_SOURCES += $(SRCDIR)/utils/s2n_safety.c

CHECK_FUNCTION_CONTRACTS=$(PROOF_UID)
USE_DYNAMIC_FRAMES=1

include ../Makefile.common
