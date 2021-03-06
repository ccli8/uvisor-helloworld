/*
 * Copyright (c) 2013-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __UVISOR_HELLOWORLD_BOX_CHALLENGE_H__
#define __UVISOR_HELLOWORLD_BOX_CHALLENGE_H__

#define CHALLENGE_SIZE 16

extern bool challenge_verify(const uint8_t *secret, int len);
extern void challenge_init(void);
extern void *g_box_context;

#endif/*__UVISOR_HELLOWORLD_BOX_CHALLENGE_H__*/
