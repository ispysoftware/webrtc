/*
 *  Copyright 2019 pixiv Inc. All Rights Reserved.
 *
 *  Use of this source code is governed by a license that can be
 *  found in the LICENSE.pixiv file in the root of the source tree.
 */

#ifndef SDK_C_P2P_BASE_H_
#define SDK_C_P2P_BASE_H_

#include "sdk/c/interop.h"

#ifdef __cplusplus
#include "p2p/base/port_allocator.h"
#endif

RTC_C_CLASS(cricket::PortAllocator, CricketPortAllocator)

#endif
