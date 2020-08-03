// Copyright 2020 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#define RSR(reg, at)         __asm__ __volatile__ ("rsr %0, %1" : "=r" (at) : "i" (reg))
#define WSR(reg, at)         __asm__ __volatile__ ("wsr %0, %1" : : "r" (at), "i" (reg))
#define XSR(reg, at)         __asm__ __volatile__ ("xsr %0, %1" : "+r" (at) : "i" (reg))

#define RER(reg, at)         __asm__ __volatile__ ("rer %0, %1" : "=r" (at) : "r" (reg))

#define WITLB(at, as)        __asm__ __volatile__ ("witlb  %0, %1; \n isync \n " : : "r" (at), "r" (as))
#define WDTLB(at, as)        __asm__ __volatile__ ("wdtlb  %0, %1; \n dsync \n " : : "r" (at), "r" (as))