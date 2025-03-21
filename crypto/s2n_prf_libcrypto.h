/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#pragma once

#include "utils/s2n_blob.h"
#include "utils/s2n_result.h"

S2N_RESULT s2n_prf_libcrypto(struct s2n_connection *conn,
        struct s2n_blob *secret, struct s2n_blob *label,
        struct s2n_blob *seed_a, struct s2n_blob *seed_b, struct s2n_blob *seed_c,
        struct s2n_blob *out);
