/*************************************************************************
 * Copyright (c) 2024, Advanced Micro Devices, Inc. All rights reserved.
 *
 * Minimal common.h stub for NPKit compatibility in network plugins
 ************************************************************************/

#ifndef NCCL_COMMON_STUB_H_
#define NCCL_COMMON_STUB_H_

// This stub header is needed when compiling network plugins with NPKIT support.
// The npkit.h header expects to find common.h, which normally provides ncclResult_t.
// In plugin context, ncclResult_t is already available via nccl.h (included by net.h),
// so we just need this empty stub to satisfy the include.

#include "nccl.h"  // Provides ncclResult_t

#endif // NCCL_COMMON_STUB_H_


