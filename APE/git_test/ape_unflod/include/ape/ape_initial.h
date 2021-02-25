/*
 * Copyright (c) 2017, NVIDIA CORPORATION. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *  * Neither the name of NVIDIA CORPORATION nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __APE_INIT_REG_H_
#define __APE_INIT_REG_H_



// Register BDMA_CFG_SRC_ADDR_LOW_0
#define BDMA_CFG_SRC_ADDR_LOW_0                         (_MK_ADDR_CONST(0x4000))
#define BDMA_CFG_SRC_ADDR_LOW_0_SECURE                                     (0x0)
#define BDMA_CFG_SRC_ADDR_LOW_0_DUAL                                       (0x0)
#define BDMA_CFG_SRC_ADDR_LOW_0_SCR                                          (0)
#define BDMA_CFG_SRC_ADDR_LOW_0_WORD_COUNT                                 (0x1)
#define BDMA_CFG_SRC_ADDR_LOW_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_LOW_0_RESET_MASK          (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_ADDR_LOW_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_LOW_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_LOW_0_READ_MASK           (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_ADDR_LOW_0_WRITE_MASK          (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_SHIFT                   (_MK_SHIFT_CONST(5))
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, BDMA_CFG_SRC_ADDR_LOW_0_V32_SHIFT))
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_RANGE                                 (31:5)
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_WOFFSET                                (0x0)
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_DEFAULT                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_DEFAULT_MASK     (_MK_MASK_CONST(0x7ffffff))
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_LOW_0_V32_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_SRC_ADDR_HIGH_0
#define BDMA_CFG_SRC_ADDR_HIGH_0                        (_MK_ADDR_CONST(0x4004))
#define BDMA_CFG_SRC_ADDR_HIGH_0_SECURE                                    (0x0)
#define BDMA_CFG_SRC_ADDR_HIGH_0_DUAL                                      (0x0)
#define BDMA_CFG_SRC_ADDR_HIGH_0_SCR                                         (0)
#define BDMA_CFG_SRC_ADDR_HIGH_0_WORD_COUNT                                (0x1)
#define BDMA_CFG_SRC_ADDR_HIGH_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_HIGH_0_RESET_MASK         (_MK_MASK_CONST(0xffffffff))
#define BDMA_CFG_SRC_ADDR_HIGH_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_HIGH_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_HIGH_0_READ_MASK          (_MK_MASK_CONST(0xffffffff))
#define BDMA_CFG_SRC_ADDR_HIGH_0_WRITE_MASK         (_MK_MASK_CONST(0xffffffff))
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_SHIFT                   (_MK_SHIFT_CONST(0))
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_FIELD \
	(_MK_FIELD_CONST(0xffffffff, BDMA_CFG_SRC_ADDR_HIGH_0_V8_SHIFT))
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_RANGE                                 (31:0)
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_WOFFSET                                (0x0)
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_DEFAULT                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_DEFAULT_MASK    (_MK_MASK_CONST(0xffffffff))
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_ADDR_HIGH_0_V8_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_DST_ADDR_LOW_0
#define BDMA_CFG_DST_ADDR_LOW_0                         (_MK_ADDR_CONST(0x4008))
#define BDMA_CFG_DST_ADDR_LOW_0_SECURE                                     (0x0)
#define BDMA_CFG_DST_ADDR_LOW_0_DUAL                                       (0x0)
#define BDMA_CFG_DST_ADDR_LOW_0_SCR                                          (0)
#define BDMA_CFG_DST_ADDR_LOW_0_WORD_COUNT                                 (0x1)
#define BDMA_CFG_DST_ADDR_LOW_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_LOW_0_RESET_MASK          (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_ADDR_LOW_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_LOW_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_LOW_0_READ_MASK           (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_ADDR_LOW_0_WRITE_MASK          (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_ADDR_LOW_0_V32_SHIFT                   (_MK_SHIFT_CONST(5))
#define BDMA_CFG_DST_ADDR_LOW_0_V32_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, BDMA_CFG_DST_ADDR_LOW_0_V32_SHIFT))
#define BDMA_CFG_DST_ADDR_LOW_0_V32_RANGE                                 (31:5)
#define BDMA_CFG_DST_ADDR_LOW_0_V32_WOFFSET                                (0x0)
#define BDMA_CFG_DST_ADDR_LOW_0_V32_DEFAULT                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_LOW_0_V32_DEFAULT_MASK     (_MK_MASK_CONST(0x7ffffff))
#define BDMA_CFG_DST_ADDR_LOW_0_V32_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_LOW_0_V32_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_LOW_0_V32_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_LOW_0_V32_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_DST_ADDR_HIGH_0
#define BDMA_CFG_DST_ADDR_HIGH_0                        (_MK_ADDR_CONST(0x400c))
#define BDMA_CFG_DST_ADDR_HIGH_0_SECURE                                    (0x0)
#define BDMA_CFG_DST_ADDR_HIGH_0_DUAL                                      (0x0)
#define BDMA_CFG_DST_ADDR_HIGH_0_SCR                                         (0)
#define BDMA_CFG_DST_ADDR_HIGH_0_WORD_COUNT                                (0x1)
#define BDMA_CFG_DST_ADDR_HIGH_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_HIGH_0_RESET_MASK         (_MK_MASK_CONST(0xffffffff))
#define BDMA_CFG_DST_ADDR_HIGH_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_HIGH_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_HIGH_0_READ_MASK          (_MK_MASK_CONST(0xffffffff))
#define BDMA_CFG_DST_ADDR_HIGH_0_WRITE_MASK         (_MK_MASK_CONST(0xffffffff))
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_SHIFT                   (_MK_SHIFT_CONST(0))
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_FIELD \
	(_MK_FIELD_CONST(0xffffffff, BDMA_CFG_DST_ADDR_HIGH_0_V8_SHIFT))
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_RANGE                                 (31:0)
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_WOFFSET                                (0x0)
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_DEFAULT                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_DEFAULT_MASK    (_MK_MASK_CONST(0xffffffff))
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_ADDR_HIGH_0_V8_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_LINE_0
#define BDMA_CFG_LINE_0                                 (_MK_ADDR_CONST(0x4010))
#define BDMA_CFG_LINE_0_SECURE                                             (0x0)
#define BDMA_CFG_LINE_0_DUAL                                               (0x0)
#define BDMA_CFG_LINE_0_SCR                                                  (0)
#define BDMA_CFG_LINE_0_WORD_COUNT                                         (0x1)
#define BDMA_CFG_LINE_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_0_RESET_MASK                      (_MK_MASK_CONST(0x1fff))
#define BDMA_CFG_LINE_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_0_READ_MASK                       (_MK_MASK_CONST(0x1fff))
#define BDMA_CFG_LINE_0_WRITE_MASK                      (_MK_MASK_CONST(0x1fff))
#define BDMA_CFG_LINE_0_SIZE_SHIFT                          (_MK_SHIFT_CONST(0))
#define BDMA_CFG_LINE_0_SIZE_FIELD \
	(_MK_FIELD_CONST(0x1fff, BDMA_CFG_LINE_0_SIZE_SHIFT))
#define BDMA_CFG_LINE_0_SIZE_RANGE                                        (12:0)
#define BDMA_CFG_LINE_0_SIZE_WOFFSET                                       (0x0)
#define BDMA_CFG_LINE_0_SIZE_DEFAULT                       (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_0_SIZE_DEFAULT_MASK               (_MK_MASK_CONST(0x1fff))
#define BDMA_CFG_LINE_0_SIZE_SW_DEFAULT                    (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_0_SIZE_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_0_SIZE_PARITY_PROTECTION             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_0_SIZE_PLATFORM_DEPENDENT            (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_CMD_0
#define BDMA_CFG_CMD_0                                  (_MK_ADDR_CONST(0x4014))
#define BDMA_CFG_CMD_0_SECURE                                              (0x0)
#define BDMA_CFG_CMD_0_DUAL                                                (0x0)
#define BDMA_CFG_CMD_0_SCR                                                   (0)
#define BDMA_CFG_CMD_0_WORD_COUNT                                          (0x1)
#define BDMA_CFG_CMD_0_RESET_VAL                           (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_RESET_MASK                          (_MK_MASK_CONST(0x3))
#define BDMA_CFG_CMD_0_SW_DEFAULT_VAL                      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_SW_DEFAULT_MASK                     (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_READ_MASK                           (_MK_MASK_CONST(0x3))
#define BDMA_CFG_CMD_0_WRITE_MASK                          (_MK_MASK_CONST(0x3))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_SHIFT                   (_MK_SHIFT_CONST(0))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, BDMA_CFG_CMD_0_SRC_RAM_TYPE_SHIFT))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_RANGE                                  (0:0)
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_WOFFSET                                (0x0)
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_DEFAULT                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_CVSRAM                   (_MK_ENUM_CONST(0))
#define BDMA_CFG_CMD_0_SRC_RAM_TYPE_MC                       (_MK_ENUM_CONST(1))

#define BDMA_CFG_CMD_0_DST_RAM_TYPE_SHIFT                   (_MK_SHIFT_CONST(1))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, BDMA_CFG_CMD_0_DST_RAM_TYPE_SHIFT))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_RANGE                                  (1:1)
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_WOFFSET                                (0x0)
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_DEFAULT                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_CVSRAM                   (_MK_ENUM_CONST(0))
#define BDMA_CFG_CMD_0_DST_RAM_TYPE_MC                       (_MK_ENUM_CONST(1))


// Register BDMA_CFG_LINE_REPEAT_0
#define BDMA_CFG_LINE_REPEAT_0                          (_MK_ADDR_CONST(0x4018))
#define BDMA_CFG_LINE_REPEAT_0_SECURE                                      (0x0)
#define BDMA_CFG_LINE_REPEAT_0_DUAL                                        (0x0)
#define BDMA_CFG_LINE_REPEAT_0_SCR                                           (0)
#define BDMA_CFG_LINE_REPEAT_0_WORD_COUNT                                  (0x1)
#define BDMA_CFG_LINE_REPEAT_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_REPEAT_0_RESET_MASK             (_MK_MASK_CONST(0xffffff))
#define BDMA_CFG_LINE_REPEAT_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_REPEAT_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_REPEAT_0_READ_MASK              (_MK_MASK_CONST(0xffffff))
#define BDMA_CFG_LINE_REPEAT_0_WRITE_MASK             (_MK_MASK_CONST(0xffffff))
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_SHIFT                 (_MK_SHIFT_CONST(0))
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_FIELD \
	(_MK_FIELD_CONST(0xffffff, BDMA_CFG_LINE_REPEAT_0_NUMBER_SHIFT))
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_RANGE                               (23:0)
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_WOFFSET                              (0x0)
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_DEFAULT              (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_DEFAULT_MASK    (_MK_MASK_CONST(0xffffff))
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LINE_REPEAT_0_NUMBER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register BDMA_CFG_SRC_LINE_0
#define BDMA_CFG_SRC_LINE_0                             (_MK_ADDR_CONST(0x401c))
#define BDMA_CFG_SRC_LINE_0_SECURE                                         (0x0)
#define BDMA_CFG_SRC_LINE_0_DUAL                                           (0x0)
#define BDMA_CFG_SRC_LINE_0_SCR                                              (0)
#define BDMA_CFG_SRC_LINE_0_WORD_COUNT                                     (0x1)
#define BDMA_CFG_SRC_LINE_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_LINE_0_RESET_MASK              (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_LINE_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_LINE_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_LINE_0_READ_MASK               (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_LINE_0_WRITE_MASK              (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_LINE_0_STRIDE_SHIFT                    (_MK_SHIFT_CONST(5))
#define BDMA_CFG_SRC_LINE_0_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, BDMA_CFG_SRC_LINE_0_STRIDE_SHIFT))
#define BDMA_CFG_SRC_LINE_0_STRIDE_RANGE                                  (31:5)
#define BDMA_CFG_SRC_LINE_0_STRIDE_WOFFSET                                 (0x0)
#define BDMA_CFG_SRC_LINE_0_STRIDE_DEFAULT                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_LINE_0_STRIDE_DEFAULT_MASK      (_MK_MASK_CONST(0x7ffffff))
#define BDMA_CFG_SRC_LINE_0_STRIDE_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_LINE_0_STRIDE_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_LINE_0_STRIDE_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_LINE_0_STRIDE_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_DST_LINE_0
#define BDMA_CFG_DST_LINE_0                             (_MK_ADDR_CONST(0x4020))
#define BDMA_CFG_DST_LINE_0_SECURE                                         (0x0)
#define BDMA_CFG_DST_LINE_0_DUAL                                           (0x0)
#define BDMA_CFG_DST_LINE_0_SCR                                              (0)
#define BDMA_CFG_DST_LINE_0_WORD_COUNT                                     (0x1)
#define BDMA_CFG_DST_LINE_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_LINE_0_RESET_MASK              (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_LINE_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_LINE_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_LINE_0_READ_MASK               (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_LINE_0_WRITE_MASK              (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_LINE_0_STRIDE_SHIFT                    (_MK_SHIFT_CONST(5))
#define BDMA_CFG_DST_LINE_0_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, BDMA_CFG_DST_LINE_0_STRIDE_SHIFT))
#define BDMA_CFG_DST_LINE_0_STRIDE_RANGE                                  (31:5)
#define BDMA_CFG_DST_LINE_0_STRIDE_WOFFSET                                 (0x0)
#define BDMA_CFG_DST_LINE_0_STRIDE_DEFAULT                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_LINE_0_STRIDE_DEFAULT_MASK      (_MK_MASK_CONST(0x7ffffff))
#define BDMA_CFG_DST_LINE_0_STRIDE_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_LINE_0_STRIDE_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_LINE_0_STRIDE_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_LINE_0_STRIDE_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_SURF_REPEAT_0
#define BDMA_CFG_SURF_REPEAT_0                          (_MK_ADDR_CONST(0x4024))
#define BDMA_CFG_SURF_REPEAT_0_SECURE                                      (0x0)
#define BDMA_CFG_SURF_REPEAT_0_DUAL                                        (0x0)
#define BDMA_CFG_SURF_REPEAT_0_SCR                                           (0)
#define BDMA_CFG_SURF_REPEAT_0_WORD_COUNT                                  (0x1)
#define BDMA_CFG_SURF_REPEAT_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SURF_REPEAT_0_RESET_MASK             (_MK_MASK_CONST(0xffffff))
#define BDMA_CFG_SURF_REPEAT_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SURF_REPEAT_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SURF_REPEAT_0_READ_MASK              (_MK_MASK_CONST(0xffffff))
#define BDMA_CFG_SURF_REPEAT_0_WRITE_MASK             (_MK_MASK_CONST(0xffffff))
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_SHIFT                 (_MK_SHIFT_CONST(0))
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_FIELD \
	(_MK_FIELD_CONST(0xffffff, BDMA_CFG_SURF_REPEAT_0_NUMBER_SHIFT))
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_RANGE                               (23:0)
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_WOFFSET                              (0x0)
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_DEFAULT              (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_DEFAULT_MASK    (_MK_MASK_CONST(0xffffff))
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SURF_REPEAT_0_NUMBER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register BDMA_CFG_SRC_SURF_0
#define BDMA_CFG_SRC_SURF_0                             (_MK_ADDR_CONST(0x4028))
#define BDMA_CFG_SRC_SURF_0_SECURE                                         (0x0)
#define BDMA_CFG_SRC_SURF_0_DUAL                                           (0x0)
#define BDMA_CFG_SRC_SURF_0_SCR                                              (0)
#define BDMA_CFG_SRC_SURF_0_WORD_COUNT                                     (0x1)
#define BDMA_CFG_SRC_SURF_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_SURF_0_RESET_MASK              (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_SURF_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_SURF_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_SURF_0_READ_MASK               (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_SURF_0_WRITE_MASK              (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_SRC_SURF_0_STRIDE_SHIFT                    (_MK_SHIFT_CONST(5))
#define BDMA_CFG_SRC_SURF_0_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, BDMA_CFG_SRC_SURF_0_STRIDE_SHIFT))
#define BDMA_CFG_SRC_SURF_0_STRIDE_RANGE                                  (31:5)
#define BDMA_CFG_SRC_SURF_0_STRIDE_WOFFSET                                 (0x0)
#define BDMA_CFG_SRC_SURF_0_STRIDE_DEFAULT                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_SURF_0_STRIDE_DEFAULT_MASK      (_MK_MASK_CONST(0x7ffffff))
#define BDMA_CFG_SRC_SURF_0_STRIDE_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_SURF_0_STRIDE_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_SURF_0_STRIDE_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define BDMA_CFG_SRC_SURF_0_STRIDE_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_DST_SURF_0
#define BDMA_CFG_DST_SURF_0                             (_MK_ADDR_CONST(0x402c))
#define BDMA_CFG_DST_SURF_0_SECURE                                         (0x0)
#define BDMA_CFG_DST_SURF_0_DUAL                                           (0x0)
#define BDMA_CFG_DST_SURF_0_SCR                                              (0)
#define BDMA_CFG_DST_SURF_0_WORD_COUNT                                     (0x1)
#define BDMA_CFG_DST_SURF_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_SURF_0_RESET_MASK              (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_SURF_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_SURF_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_SURF_0_READ_MASK               (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_SURF_0_WRITE_MASK              (_MK_MASK_CONST(0xffffffe0))
#define BDMA_CFG_DST_SURF_0_STRIDE_SHIFT                    (_MK_SHIFT_CONST(5))
#define BDMA_CFG_DST_SURF_0_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, BDMA_CFG_DST_SURF_0_STRIDE_SHIFT))
#define BDMA_CFG_DST_SURF_0_STRIDE_RANGE                                  (31:5)
#define BDMA_CFG_DST_SURF_0_STRIDE_WOFFSET                                 (0x0)
#define BDMA_CFG_DST_SURF_0_STRIDE_DEFAULT                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_SURF_0_STRIDE_DEFAULT_MASK      (_MK_MASK_CONST(0x7ffffff))
#define BDMA_CFG_DST_SURF_0_STRIDE_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_SURF_0_STRIDE_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_SURF_0_STRIDE_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define BDMA_CFG_DST_SURF_0_STRIDE_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))


// Register BDMA_CFG_OP_0
#define BDMA_CFG_OP_0                                   (_MK_ADDR_CONST(0x4030))
#define BDMA_CFG_OP_0_SECURE                                               (0x0)
#define BDMA_CFG_OP_0_DUAL                                                 (0x0)
#define BDMA_CFG_OP_0_SCR                                                    (0)
#define BDMA_CFG_OP_0_WORD_COUNT                                           (0x1)
#define BDMA_CFG_OP_0_RESET_VAL                            (_MK_MASK_CONST(0x0))
#define BDMA_CFG_OP_0_RESET_MASK                           (_MK_MASK_CONST(0x1))
#define BDMA_CFG_OP_0_SW_DEFAULT_VAL                       (_MK_MASK_CONST(0x0))
#define BDMA_CFG_OP_0_SW_DEFAULT_MASK                      (_MK_MASK_CONST(0x0))
#define BDMA_CFG_OP_0_READ_MASK                            (_MK_MASK_CONST(0x1))
#define BDMA_CFG_OP_0_WRITE_MASK                           (_MK_MASK_CONST(0x1))
#define BDMA_CFG_OP_0_EN_SHIFT                              (_MK_SHIFT_CONST(0))
#define BDMA_CFG_OP_0_EN_FIELD    (_MK_FIELD_CONST(0x1, BDMA_CFG_OP_0_EN_SHIFT))
#define BDMA_CFG_OP_0_EN_RANGE                                             (0:0)
#define BDMA_CFG_OP_0_EN_WOFFSET                                           (0x0)
#define BDMA_CFG_OP_0_EN_DEFAULT                           (_MK_MASK_CONST(0x0))
#define BDMA_CFG_OP_0_EN_DEFAULT_MASK                      (_MK_MASK_CONST(0x1))
#define BDMA_CFG_OP_0_EN_SW_DEFAULT                        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_OP_0_EN_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define BDMA_CFG_OP_0_EN_PARITY_PROTECTION                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_OP_0_EN_PLATFORM_DEPENDENT                (_MK_MASK_CONST(0x1))
#define BDMA_CFG_OP_0_EN_DISABLE                             (_MK_ENUM_CONST(0))
#define BDMA_CFG_OP_0_EN_ENABLE                              (_MK_ENUM_CONST(1))


// Register BDMA_CFG_LAUNCH0_0
#define BDMA_CFG_LAUNCH0_0                              (_MK_ADDR_CONST(0x4034))
#define BDMA_CFG_LAUNCH0_0_SECURE                                          (0x0)
#define BDMA_CFG_LAUNCH0_0_DUAL                                            (0x0)
#define BDMA_CFG_LAUNCH0_0_SCR                                               (0)
#define BDMA_CFG_LAUNCH0_0_WORD_COUNT                                      (0x1)
#define BDMA_CFG_LAUNCH0_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH0_0_RESET_MASK                      (_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH0_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH0_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH0_0_READ_MASK                       (_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH0_0_WRITE_MASK                      (_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_SHIFT                (_MK_SHIFT_CONST(0))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_FIELD \
	(_MK_FIELD_CONST(0x1, BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_SHIFT))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_RANGE                               (0:0)
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_WOFFSET                             (0x0)
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_DEFAULT             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_DEFAULT_MASK        (_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_NO                    (_MK_ENUM_CONST(0))
#define BDMA_CFG_LAUNCH0_0_GRP0_LAUNCH_YES                   (_MK_ENUM_CONST(1))


// Register BDMA_CFG_LAUNCH1_0
#define BDMA_CFG_LAUNCH1_0                              (_MK_ADDR_CONST(0x4038))
#define BDMA_CFG_LAUNCH1_0_SECURE                                          (0x0)
#define BDMA_CFG_LAUNCH1_0_DUAL                                            (0x0)
#define BDMA_CFG_LAUNCH1_0_SCR                                               (0)
#define BDMA_CFG_LAUNCH1_0_WORD_COUNT                                      (0x1)
#define BDMA_CFG_LAUNCH1_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH1_0_RESET_MASK                      (_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH1_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH1_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH1_0_READ_MASK                       (_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH1_0_WRITE_MASK                      (_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_SHIFT                (_MK_SHIFT_CONST(0))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_FIELD \
	(_MK_FIELD_CONST(0x1, BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_SHIFT))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_RANGE                               (0:0)
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_WOFFSET                             (0x0)
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_DEFAULT             (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_DEFAULT_MASK        (_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_NO                    (_MK_ENUM_CONST(0))
#define BDMA_CFG_LAUNCH1_0_GRP1_LAUNCH_YES                   (_MK_ENUM_CONST(1))


// Register BDMA_CFG_STATUS_0
#define BDMA_CFG_STATUS_0                               (_MK_ADDR_CONST(0x403c))
#define BDMA_CFG_STATUS_0_SECURE                                           (0x0)
#define BDMA_CFG_STATUS_0_DUAL                                             (0x0)
#define BDMA_CFG_STATUS_0_SCR                                                (0)
#define BDMA_CFG_STATUS_0_WORD_COUNT                                       (0x1)
#define BDMA_CFG_STATUS_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_STATUS_0_RESET_MASK                       (_MK_MASK_CONST(0x1))
#define BDMA_CFG_STATUS_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define BDMA_CFG_STATUS_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define BDMA_CFG_STATUS_0_READ_MASK                        (_MK_MASK_CONST(0x1))
#define BDMA_CFG_STATUS_0_WRITE_MASK                       (_MK_MASK_CONST(0x1))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_SHIFT              (_MK_SHIFT_CONST(0))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_FIELD \
	(_MK_FIELD_CONST(0x1, BDMA_CFG_STATUS_0_STALL_COUNT_EN_SHIFT))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_RANGE                             (0:0)
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_WOFFSET                           (0x0)
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_DEFAULT           (_MK_MASK_CONST(0x0))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_INIT_ENUM                          (NO)
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_NO                  (_MK_ENUM_CONST(0))
#define BDMA_CFG_STATUS_0_STALL_COUNT_EN_YES                 (_MK_ENUM_CONST(1))


// Register BDMA_STATUS_0
#define BDMA_STATUS_0                                   (_MK_ADDR_CONST(0x4040))
#define BDMA_STATUS_0_SECURE                                               (0x0)
#define BDMA_STATUS_0_DUAL                                                 (0x0)
#define BDMA_STATUS_0_SCR                                                    (0)
#define BDMA_STATUS_0_WORD_COUNT                                           (0x1)
#define BDMA_STATUS_0_RESET_VAL                          (_MK_MASK_CONST(0x114))
#define BDMA_STATUS_0_RESET_MASK                         (_MK_MASK_CONST(0x7ff))
#define BDMA_STATUS_0_SW_DEFAULT_VAL                       (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_SW_DEFAULT_MASK                      (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_READ_MASK                          (_MK_MASK_CONST(0x7ff))
#define BDMA_STATUS_0_WRITE_MASK                           (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_FREE_SLOT_SHIFT                       (_MK_SHIFT_CONST(0))
#define BDMA_STATUS_0_FREE_SLOT_FIELD \
	(_MK_FIELD_CONST(0xff, BDMA_STATUS_0_FREE_SLOT_SHIFT))
#define BDMA_STATUS_0_FREE_SLOT_RANGE                                      (7:0)
#define BDMA_STATUS_0_FREE_SLOT_WOFFSET                                    (0x0)
#define BDMA_STATUS_0_FREE_SLOT_DEFAULT                   (_MK_MASK_CONST(0x14))
#define BDMA_STATUS_0_FREE_SLOT_DEFAULT_MASK              (_MK_MASK_CONST(0xff))
#define BDMA_STATUS_0_FREE_SLOT_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_FREE_SLOT_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_FREE_SLOT_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_FREE_SLOT_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))

#define BDMA_STATUS_0_IDLE_SHIFT                            (_MK_SHIFT_CONST(8))
#define BDMA_STATUS_0_IDLE_FIELD \
	(_MK_FIELD_CONST(0x1, BDMA_STATUS_0_IDLE_SHIFT))
#define BDMA_STATUS_0_IDLE_RANGE                                           (8:8)
#define BDMA_STATUS_0_IDLE_WOFFSET                                         (0x0)
#define BDMA_STATUS_0_IDLE_DEFAULT                         (_MK_MASK_CONST(0x1))
#define BDMA_STATUS_0_IDLE_DEFAULT_MASK                    (_MK_MASK_CONST(0x1))
#define BDMA_STATUS_0_IDLE_SW_DEFAULT                      (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_IDLE_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_IDLE_PARITY_PROTECTION               (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_IDLE_PLATFORM_DEPENDENT              (_MK_MASK_CONST(0x1))
#define BDMA_STATUS_0_IDLE_INIT_ENUM                                       (YES)
#define BDMA_STATUS_0_IDLE_NO                                (_MK_ENUM_CONST(0))
#define BDMA_STATUS_0_IDLE_YES                               (_MK_ENUM_CONST(1))

#define BDMA_STATUS_0_GRP0_BUSY_SHIFT                       (_MK_SHIFT_CONST(9))
#define BDMA_STATUS_0_GRP0_BUSY_FIELD \
	(_MK_FIELD_CONST(0x1, BDMA_STATUS_0_GRP0_BUSY_SHIFT))
#define BDMA_STATUS_0_GRP0_BUSY_RANGE                                      (9:9)
#define BDMA_STATUS_0_GRP0_BUSY_WOFFSET                                    (0x0)
#define BDMA_STATUS_0_GRP0_BUSY_DEFAULT                    (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_GRP0_BUSY_DEFAULT_MASK               (_MK_MASK_CONST(0x1))
#define BDMA_STATUS_0_GRP0_BUSY_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_GRP0_BUSY_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_GRP0_BUSY_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_GRP0_BUSY_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define BDMA_STATUS_0_GRP0_BUSY_INIT_ENUM                                   (NO)
#define BDMA_STATUS_0_GRP0_BUSY_NO                           (_MK_ENUM_CONST(0))
#define BDMA_STATUS_0_GRP0_BUSY_YES                          (_MK_ENUM_CONST(1))

#define BDMA_STATUS_0_GRP1_BUSY_SHIFT                      (_MK_SHIFT_CONST(10))
#define BDMA_STATUS_0_GRP1_BUSY_FIELD \
	(_MK_FIELD_CONST(0x1, BDMA_STATUS_0_GRP1_BUSY_SHIFT))
#define BDMA_STATUS_0_GRP1_BUSY_RANGE                                    (10:10)
#define BDMA_STATUS_0_GRP1_BUSY_WOFFSET                                    (0x0)
#define BDMA_STATUS_0_GRP1_BUSY_DEFAULT                    (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_GRP1_BUSY_DEFAULT_MASK               (_MK_MASK_CONST(0x1))
#define BDMA_STATUS_0_GRP1_BUSY_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_GRP1_BUSY_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_GRP1_BUSY_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_0_GRP1_BUSY_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define BDMA_STATUS_0_GRP1_BUSY_INIT_ENUM                                   (NO)
#define BDMA_STATUS_0_GRP1_BUSY_NO                           (_MK_ENUM_CONST(0))
#define BDMA_STATUS_0_GRP1_BUSY_YES                          (_MK_ENUM_CONST(1))


// Register BDMA_STATUS_GRP0_READ_STALL_0
#define BDMA_STATUS_GRP0_READ_STALL_0                   (_MK_ADDR_CONST(0x4044))
#define BDMA_STATUS_GRP0_READ_STALL_0_SECURE                               (0x0)
#define BDMA_STATUS_GRP0_READ_STALL_0_DUAL                                 (0x0)
#define BDMA_STATUS_GRP0_READ_STALL_0_SCR                                    (0)
#define BDMA_STATUS_GRP0_READ_STALL_0_WORD_COUNT                           (0x1)
#define BDMA_STATUS_GRP0_READ_STALL_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_READ_STALL_0_RESET_MASK    (_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP0_READ_STALL_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_READ_STALL_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_READ_STALL_0_READ_MASK     (_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP0_READ_STALL_0_WRITE_MASK           (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_SHIFT           (_MK_SHIFT_CONST(0))
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	BDMA_STATUS_GRP0_READ_STALL_0_COUNT_SHIFT))
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_RANGE                         (31:0)
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_WOFFSET                        (0x0)
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_DEFAULT        (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_READ_STALL_0_COUNT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register BDMA_STATUS_GRP0_WRITE_STALL_0
#define BDMA_STATUS_GRP0_WRITE_STALL_0                  (_MK_ADDR_CONST(0x4048))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_SECURE                              (0x0)
#define BDMA_STATUS_GRP0_WRITE_STALL_0_DUAL                                (0x0)
#define BDMA_STATUS_GRP0_WRITE_STALL_0_SCR                                   (0)
#define BDMA_STATUS_GRP0_WRITE_STALL_0_WORD_COUNT                          (0x1)
#define BDMA_STATUS_GRP0_WRITE_STALL_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_READ_MASK    (_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_WRITE_MASK          (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_SHIFT          (_MK_SHIFT_CONST(0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_SHIFT))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_RANGE                        (31:0)
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_WOFFSET                       (0x0)
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_DEFAULT       (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP0_WRITE_STALL_0_COUNT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register BDMA_STATUS_GRP1_READ_STALL_0
#define BDMA_STATUS_GRP1_READ_STALL_0                   (_MK_ADDR_CONST(0x404c))
#define BDMA_STATUS_GRP1_READ_STALL_0_SECURE                               (0x0)
#define BDMA_STATUS_GRP1_READ_STALL_0_DUAL                                 (0x0)
#define BDMA_STATUS_GRP1_READ_STALL_0_SCR                                    (0)
#define BDMA_STATUS_GRP1_READ_STALL_0_WORD_COUNT                           (0x1)
#define BDMA_STATUS_GRP1_READ_STALL_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP1_READ_STALL_0_RESET_MASK    (_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP1_READ_STALL_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP1_READ_STALL_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP1_READ_STALL_0_READ_MASK     (_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP1_READ_STALL_0_WRITE_MASK           (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_SHIFT           (_MK_SHIFT_CONST(0))
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	BDMA_STATUS_GRP1_READ_STALL_0_COUNT_SHIFT))
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_RANGE                         (31:0)
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_WOFFSET                        (0x0)
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_DEFAULT        (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define BDMA_STATUS_GRP1_READ_STALL_0_COUNT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))





// Register CDMA_S_STATUS_0
#define CDMA_S_STATUS_0                                 (_MK_ADDR_CONST(0x5000))
#define CDMA_S_STATUS_0_SECURE                                             (0x0)
#define CDMA_S_STATUS_0_DUAL                                               (0x0)
#define CDMA_S_STATUS_0_SCR                                                  (0)
#define CDMA_S_STATUS_0_WORD_COUNT                                         (0x1)
#define CDMA_S_STATUS_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_RESET_MASK                     (_MK_MASK_CONST(0x30003))
#define CDMA_S_STATUS_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_READ_MASK                      (_MK_MASK_CONST(0x30003))
#define CDMA_S_STATUS_0_WRITE_MASK                         (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_0_SHIFT                      (_MK_SHIFT_CONST(0))
#define CDMA_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, CDMA_S_STATUS_0_STATUS_0_SHIFT))
#define CDMA_S_STATUS_0_STATUS_0_RANGE                                     (1:0)
#define CDMA_S_STATUS_0_STATUS_0_WOFFSET                                   (0x0)
#define CDMA_S_STATUS_0_STATUS_0_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_0_DEFAULT_MASK              (_MK_MASK_CONST(0x3))
#define CDMA_S_STATUS_0_STATUS_0_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_0_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CDMA_S_STATUS_0_STATUS_0_INIT_ENUM                                (IDLE)
#define CDMA_S_STATUS_0_STATUS_0_IDLE                        (_MK_ENUM_CONST(0))
#define CDMA_S_STATUS_0_STATUS_0_RUNNING                     (_MK_ENUM_CONST(1))
#define CDMA_S_STATUS_0_STATUS_0_PENDING                     (_MK_ENUM_CONST(2))

#define CDMA_S_STATUS_0_STATUS_1_SHIFT                     (_MK_SHIFT_CONST(16))
#define CDMA_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, CDMA_S_STATUS_0_STATUS_1_SHIFT))
#define CDMA_S_STATUS_0_STATUS_1_RANGE                                   (17:16)
#define CDMA_S_STATUS_0_STATUS_1_WOFFSET                                   (0x0)
#define CDMA_S_STATUS_0_STATUS_1_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_1_DEFAULT_MASK              (_MK_MASK_CONST(0x3))
#define CDMA_S_STATUS_0_STATUS_1_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_1_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CDMA_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CDMA_S_STATUS_0_STATUS_1_INIT_ENUM                                (IDLE)
#define CDMA_S_STATUS_0_STATUS_1_IDLE                        (_MK_ENUM_CONST(0))
#define CDMA_S_STATUS_0_STATUS_1_RUNNING                     (_MK_ENUM_CONST(1))
#define CDMA_S_STATUS_0_STATUS_1_PENDING                     (_MK_ENUM_CONST(2))


// Register CDMA_S_POINTER_0
#define CDMA_S_POINTER_0                                (_MK_ADDR_CONST(0x5004))
#define CDMA_S_POINTER_0_SECURE                                            (0x0)
#define CDMA_S_POINTER_0_DUAL                                              (0x0)
#define CDMA_S_POINTER_0_SCR                                                 (0)
#define CDMA_S_POINTER_0_WORD_COUNT                                        (0x1)
#define CDMA_S_POINTER_0_RESET_VAL                         (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_RESET_MASK                    (_MK_MASK_CONST(0x10001))
#define CDMA_S_POINTER_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_READ_MASK                     (_MK_MASK_CONST(0x10001))
#define CDMA_S_POINTER_0_WRITE_MASK                        (_MK_MASK_CONST(0x1))
#define CDMA_S_POINTER_0_PRODUCER_SHIFT                     (_MK_SHIFT_CONST(0))
#define CDMA_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_S_POINTER_0_PRODUCER_SHIFT))
#define CDMA_S_POINTER_0_PRODUCER_RANGE                                    (0:0)
#define CDMA_S_POINTER_0_PRODUCER_WOFFSET                                  (0x0)
#define CDMA_S_POINTER_0_PRODUCER_DEFAULT                  (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_PRODUCER_DEFAULT_MASK             (_MK_MASK_CONST(0x1))
#define CDMA_S_POINTER_0_PRODUCER_SW_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_PRODUCER_PARITY_PROTECTION        (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT       (_MK_MASK_CONST(0x1))
#define CDMA_S_POINTER_0_PRODUCER_INIT_ENUM                            (GROUP_0)
#define CDMA_S_POINTER_0_PRODUCER_GROUP_0                    (_MK_ENUM_CONST(0))
#define CDMA_S_POINTER_0_PRODUCER_GROUP_1                    (_MK_ENUM_CONST(1))

#define CDMA_S_POINTER_0_CONSUMER_SHIFT                    (_MK_SHIFT_CONST(16))
#define CDMA_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_S_POINTER_0_CONSUMER_SHIFT))
#define CDMA_S_POINTER_0_CONSUMER_RANGE                                  (16:16)
#define CDMA_S_POINTER_0_CONSUMER_WOFFSET                                  (0x0)
#define CDMA_S_POINTER_0_CONSUMER_DEFAULT                  (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_CONSUMER_DEFAULT_MASK             (_MK_MASK_CONST(0x1))
#define CDMA_S_POINTER_0_CONSUMER_SW_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_CONSUMER_PARITY_PROTECTION        (_MK_MASK_CONST(0x0))
#define CDMA_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT       (_MK_MASK_CONST(0x1))
#define CDMA_S_POINTER_0_CONSUMER_INIT_ENUM                            (GROUP_0)
#define CDMA_S_POINTER_0_CONSUMER_GROUP_0                    (_MK_ENUM_CONST(0))
#define CDMA_S_POINTER_0_CONSUMER_GROUP_1                    (_MK_ENUM_CONST(1))


// Register CDMA_S_ARBITER_0
#define CDMA_S_ARBITER_0                                (_MK_ADDR_CONST(0x5008))
#define CDMA_S_ARBITER_0_SECURE                                            (0x0)
#define CDMA_S_ARBITER_0_DUAL                                              (0x0)
#define CDMA_S_ARBITER_0_SCR                                                 (0)
#define CDMA_S_ARBITER_0_WORD_COUNT                                        (0x1)
#define CDMA_S_ARBITER_0_RESET_VAL                     (_MK_MASK_CONST(0x3000f))
#define CDMA_S_ARBITER_0_RESET_MASK                    (_MK_MASK_CONST(0xf000f))
#define CDMA_S_ARBITER_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_S_ARBITER_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CDMA_S_ARBITER_0_READ_MASK                     (_MK_MASK_CONST(0xf000f))
#define CDMA_S_ARBITER_0_WRITE_MASK                    (_MK_MASK_CONST(0xf000f))
#define CDMA_S_ARBITER_0_ARB_WEIGHT_SHIFT                   (_MK_SHIFT_CONST(0))
#define CDMA_S_ARBITER_0_ARB_WEIGHT_FIELD \
	(_MK_FIELD_CONST(0xf, CDMA_S_ARBITER_0_ARB_WEIGHT_SHIFT))
#define CDMA_S_ARBITER_0_ARB_WEIGHT_RANGE                                  (3:0)
#define CDMA_S_ARBITER_0_ARB_WEIGHT_WOFFSET                                (0x0)
#define CDMA_S_ARBITER_0_ARB_WEIGHT_DEFAULT                (_MK_MASK_CONST(0xf))
#define CDMA_S_ARBITER_0_ARB_WEIGHT_DEFAULT_MASK           (_MK_MASK_CONST(0xf))
#define CDMA_S_ARBITER_0_ARB_WEIGHT_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_S_ARBITER_0_ARB_WEIGHT_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDMA_S_ARBITER_0_ARB_WEIGHT_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CDMA_S_ARBITER_0_ARB_WEIGHT_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))

#define CDMA_S_ARBITER_0_ARB_WMB_SHIFT                     (_MK_SHIFT_CONST(16))
#define CDMA_S_ARBITER_0_ARB_WMB_FIELD \
	(_MK_FIELD_CONST(0xf, CDMA_S_ARBITER_0_ARB_WMB_SHIFT))
#define CDMA_S_ARBITER_0_ARB_WMB_RANGE                                   (19:16)
#define CDMA_S_ARBITER_0_ARB_WMB_WOFFSET                                   (0x0)
#define CDMA_S_ARBITER_0_ARB_WMB_DEFAULT                   (_MK_MASK_CONST(0x3))
#define CDMA_S_ARBITER_0_ARB_WMB_DEFAULT_MASK              (_MK_MASK_CONST(0xf))
#define CDMA_S_ARBITER_0_ARB_WMB_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDMA_S_ARBITER_0_ARB_WMB_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_S_ARBITER_0_ARB_WMB_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CDMA_S_ARBITER_0_ARB_WMB_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))


// Register CDMA_S_CBUF_FLUSH_STATUS_0
#define CDMA_S_CBUF_FLUSH_STATUS_0                      (_MK_ADDR_CONST(0x500c))
#define CDMA_S_CBUF_FLUSH_STATUS_0_SECURE                                  (0x0)
#define CDMA_S_CBUF_FLUSH_STATUS_0_DUAL                                    (0x0)
#define CDMA_S_CBUF_FLUSH_STATUS_0_SCR                                       (0)
#define CDMA_S_CBUF_FLUSH_STATUS_0_WORD_COUNT                              (0x1)
#define CDMA_S_CBUF_FLUSH_STATUS_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_RESET_MASK              (_MK_MASK_CONST(0x1))
#define CDMA_S_CBUF_FLUSH_STATUS_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_READ_MASK               (_MK_MASK_CONST(0x1))
#define CDMA_S_CBUF_FLUSH_STATUS_0_WRITE_MASK              (_MK_MASK_CONST(0x0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_SHIFT         (_MK_SHIFT_CONST(0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_SHIFT))
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_RANGE                        (0:0)
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_WOFFSET                      (0x0)
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_S_CBUF_FLUSH_STATUS_0_FLUSH_DONE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_OP_ENABLE_0
#define CDMA_D_OP_ENABLE_0                              (_MK_ADDR_CONST(0x5010))
#define CDMA_D_OP_ENABLE_0_SECURE                                          (0x0)
#define CDMA_D_OP_ENABLE_0_DUAL                                            (0x0)
#define CDMA_D_OP_ENABLE_0_SCR                                               (0)
#define CDMA_D_OP_ENABLE_0_WORD_COUNT                                      (0x1)
#define CDMA_D_OP_ENABLE_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define CDMA_D_OP_ENABLE_0_RESET_MASK                      (_MK_MASK_CONST(0x1))
#define CDMA_D_OP_ENABLE_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define CDMA_D_OP_ENABLE_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define CDMA_D_OP_ENABLE_0_READ_MASK                       (_MK_MASK_CONST(0x1))
#define CDMA_D_OP_ENABLE_0_WRITE_MASK                      (_MK_MASK_CONST(0x1))
#define CDMA_D_OP_ENABLE_0_OP_EN_SHIFT                      (_MK_SHIFT_CONST(0))
#define CDMA_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_OP_ENABLE_0_OP_EN_SHIFT))
#define CDMA_D_OP_ENABLE_0_OP_EN_RANGE                                     (0:0)
#define CDMA_D_OP_ENABLE_0_OP_EN_WOFFSET                                   (0x0)
#define CDMA_D_OP_ENABLE_0_OP_EN_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CDMA_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define CDMA_D_OP_ENABLE_0_OP_EN_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDMA_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CDMA_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CDMA_D_OP_ENABLE_0_OP_EN_INIT_ENUM                             (DISABLE)
#define CDMA_D_OP_ENABLE_0_OP_EN_DISABLE                     (_MK_ENUM_CONST(0))
#define CDMA_D_OP_ENABLE_0_OP_EN_ENABLE                      (_MK_ENUM_CONST(1))


// Register CDMA_D_MISC_CFG_0
#define CDMA_D_MISC_CFG_0                               (_MK_ADDR_CONST(0x5014))
#define CDMA_D_MISC_CFG_0_SECURE                                           (0x0)
#define CDMA_D_MISC_CFG_0_DUAL                                             (0x0)
#define CDMA_D_MISC_CFG_0_SCR                                                (0)
#define CDMA_D_MISC_CFG_0_WORD_COUNT                                       (0x1)
#define CDMA_D_MISC_CFG_0_RESET_VAL                     (_MK_MASK_CONST(0x1100))
#define CDMA_D_MISC_CFG_0_RESET_MASK                (_MK_MASK_CONST(0x11113301))
#define CDMA_D_MISC_CFG_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_READ_MASK                 (_MK_MASK_CONST(0x11113301))
#define CDMA_D_MISC_CFG_0_WRITE_MASK                (_MK_MASK_CONST(0x11113301))
#define CDMA_D_MISC_CFG_0_CONV_MODE_SHIFT                   (_MK_SHIFT_CONST(0))
#define CDMA_D_MISC_CFG_0_CONV_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_MISC_CFG_0_CONV_MODE_SHIFT))
#define CDMA_D_MISC_CFG_0_CONV_MODE_RANGE                                  (0:0)
#define CDMA_D_MISC_CFG_0_CONV_MODE_WOFFSET                                (0x0)
#define CDMA_D_MISC_CFG_0_CONV_MODE_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_CONV_MODE_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_CONV_MODE_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_CONV_MODE_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_CONV_MODE_INIT_ENUM                           (DIRECT)
#define CDMA_D_MISC_CFG_0_CONV_MODE_DIRECT                   (_MK_ENUM_CONST(0))
#define CDMA_D_MISC_CFG_0_CONV_MODE_WINOGRAD                 (_MK_ENUM_CONST(1))

#define CDMA_D_MISC_CFG_0_IN_PRECISION_SHIFT                (_MK_SHIFT_CONST(8))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, CDMA_D_MISC_CFG_0_IN_PRECISION_SHIFT))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_RANGE                               (9:8)
#define CDMA_D_MISC_CFG_0_IN_PRECISION_WOFFSET                             (0x0)
#define CDMA_D_MISC_CFG_0_IN_PRECISION_DEFAULT             (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_DEFAULT_MASK        (_MK_MASK_CONST(0x3))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_INIT_ENUM                         (INT16)
#define CDMA_D_MISC_CFG_0_IN_PRECISION_INT8                  (_MK_ENUM_CONST(0))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_INT16                 (_MK_ENUM_CONST(1))
#define CDMA_D_MISC_CFG_0_IN_PRECISION_FP16                  (_MK_ENUM_CONST(2))

#define CDMA_D_MISC_CFG_0_PROC_PRECISION_SHIFT             (_MK_SHIFT_CONST(12))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, CDMA_D_MISC_CFG_0_PROC_PRECISION_SHIFT))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_RANGE                           (13:12)
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_WOFFSET                           (0x0)
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_DEFAULT           (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_DEFAULT_MASK      (_MK_MASK_CONST(0x3))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_INIT_ENUM                       (INT16)
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_INT8                (_MK_ENUM_CONST(0))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_INT16               (_MK_ENUM_CONST(1))
#define CDMA_D_MISC_CFG_0_PROC_PRECISION_FP16                (_MK_ENUM_CONST(2))

#define CDMA_D_MISC_CFG_0_DATA_REUSE_SHIFT                 (_MK_SHIFT_CONST(16))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_MISC_CFG_0_DATA_REUSE_SHIFT))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_RANGE                               (16:16)
#define CDMA_D_MISC_CFG_0_DATA_REUSE_WOFFSET                               (0x0)
#define CDMA_D_MISC_CFG_0_DATA_REUSE_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_DEFAULT_MASK          (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_INIT_ENUM                         (DISABLE)
#define CDMA_D_MISC_CFG_0_DATA_REUSE_DISABLE                 (_MK_ENUM_CONST(0))
#define CDMA_D_MISC_CFG_0_DATA_REUSE_ENABLE                  (_MK_ENUM_CONST(1))

#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_SHIFT               (_MK_SHIFT_CONST(20))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_MISC_CFG_0_WEIGHT_REUSE_SHIFT))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_RANGE                             (20:20)
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_WOFFSET                             (0x0)
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_DEFAULT_MASK        (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_INIT_ENUM                       (DISABLE)
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_DISABLE               (_MK_ENUM_CONST(0))
#define CDMA_D_MISC_CFG_0_WEIGHT_REUSE_ENABLE                (_MK_ENUM_CONST(1))

#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_SHIFT              (_MK_SHIFT_CONST(24))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_SHIFT))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_RANGE                            (24:24)
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_WOFFSET                            (0x0)
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_INIT_ENUM                      (DISABLE)
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_DISABLE              (_MK_ENUM_CONST(0))
#define CDMA_D_MISC_CFG_0_SKIP_DATA_RLS_ENABLE               (_MK_ENUM_CONST(1))

#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_SHIFT            (_MK_SHIFT_CONST(28))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_SHIFT))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_RANGE                          (28:28)
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_WOFFSET                          (0x0)
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_DEFAULT_MASK     (_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_INIT_ENUM                    (DISABLE)
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_DISABLE            (_MK_ENUM_CONST(0))
#define CDMA_D_MISC_CFG_0_SKIP_WEIGHT_RLS_ENABLE             (_MK_ENUM_CONST(1))


// Register CDMA_D_DATAIN_FORMAT_0
#define CDMA_D_DATAIN_FORMAT_0                          (_MK_ADDR_CONST(0x5018))
#define CDMA_D_DATAIN_FORMAT_0_SECURE                                      (0x0)
#define CDMA_D_DATAIN_FORMAT_0_DUAL                                        (0x0)
#define CDMA_D_DATAIN_FORMAT_0_SCR                                           (0)
#define CDMA_D_DATAIN_FORMAT_0_WORD_COUNT                                  (0x1)
#define CDMA_D_DATAIN_FORMAT_0_RESET_VAL                 (_MK_MASK_CONST(0xc00))
#define CDMA_D_DATAIN_FORMAT_0_RESET_MASK             (_MK_MASK_CONST(0x113f01))
#define CDMA_D_DATAIN_FORMAT_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_READ_MASK              (_MK_MASK_CONST(0x113f01))
#define CDMA_D_DATAIN_FORMAT_0_WRITE_MASK             (_MK_MASK_CONST(0x113f01))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_SHIFT          (_MK_SHIFT_CONST(0))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_SHIFT))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_RANGE                         (0:0)
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_WOFFSET                       (0x0)
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_INIT_ENUM                 (FEATURE)
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_FEATURE         (_MK_ENUM_CONST(0))
#define CDMA_D_DATAIN_FORMAT_0_DATAIN_FORMAT_PIXEL           (_MK_ENUM_CONST(1))

#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_SHIFT           (_MK_SHIFT_CONST(8))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_FIELD \
	(_MK_FIELD_CONST(0x3f, CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_SHIFT))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_RANGE                         (13:8)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_WOFFSET                        (0x0)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_DEFAULT        (_MK_MASK_CONST(0xc))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_INIT_ENUM               (T_A8B8G8R8)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R8             (_MK_ENUM_CONST(0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R10            (_MK_ENUM_CONST(1))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R12            (_MK_ENUM_CONST(2))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R16            (_MK_ENUM_CONST(3))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R16_I          (_MK_ENUM_CONST(4))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R16_F          (_MK_ENUM_CONST(5))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A16B16G16R16 \
	(_MK_ENUM_CONST(6))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_X16B16G16R16 \
	(_MK_ENUM_CONST(7))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A16B16G16R16_F \
	(_MK_ENUM_CONST(8))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A16Y16U16V16 \
	(_MK_ENUM_CONST(9))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_V16U16Y16A16 \
	(_MK_ENUM_CONST(10))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A16Y16U16V16_F \
	(_MK_ENUM_CONST(11))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A8B8G8R8      (_MK_ENUM_CONST(12))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A8R8G8B8      (_MK_ENUM_CONST(13))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_B8G8R8A8      (_MK_ENUM_CONST(14))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R8G8B8A8      (_MK_ENUM_CONST(15))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_X8B8G8R8      (_MK_ENUM_CONST(16))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_X8R8G8B8      (_MK_ENUM_CONST(17))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_B8G8R8X8      (_MK_ENUM_CONST(18))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R8G8B8X8      (_MK_ENUM_CONST(19))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A2B10G10R10 \
	(_MK_ENUM_CONST(20))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A2R10G10B10 \
	(_MK_ENUM_CONST(21))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_B10G10R10A2 \
	(_MK_ENUM_CONST(22))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_R10G10B10A2 \
	(_MK_ENUM_CONST(23))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A2Y10U10V10 \
	(_MK_ENUM_CONST(24))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_V10U10Y10A2 \
	(_MK_ENUM_CONST(25))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_A8Y8U8V8      (_MK_ENUM_CONST(26))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_V8U8Y8A8      (_MK_ENUM_CONST(27))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_Y8___U8V8_N444 \
	(_MK_ENUM_CONST(28))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_Y8___V8U8_N444 \
	(_MK_ENUM_CONST(29))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_Y10___U10V10_N444 \
	(_MK_ENUM_CONST(30))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_Y10___V10U10_N444 \
	(_MK_ENUM_CONST(31))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_Y12___U12V12_N444 \
	(_MK_ENUM_CONST(32))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_Y12___V12U12_N444 \
	(_MK_ENUM_CONST(33))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_Y16___U16V16_N444 \
	(_MK_ENUM_CONST(34))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_FORMAT_T_Y16___V16U16_N444 \
	(_MK_ENUM_CONST(35))

#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_SHIFT         (_MK_SHIFT_CONST(16))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_SHIFT))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_RANGE                       (16:16)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_WOFFSET                       (0x0)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_INIT_ENUM            (PITCH_LINEAR)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_PITCH_LINEAR    (_MK_ENUM_CONST(0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_MAPPING_RESERVED_LINEAR \
	(_MK_ENUM_CONST(1))

#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_SHIFT \
	(_MK_SHIFT_CONST(20))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_FIELD \
	(_MK_FIELD_CONST(0x1, \
	CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_SHIFT))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_RANGE                 (20:20)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_WOFFSET                 (0x0)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_INIT_ENUM      (UNSIGNED_INT)
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_UNSIGNED_INT \
	(_MK_ENUM_CONST(0))
#define CDMA_D_DATAIN_FORMAT_0_PIXEL_SIGN_OVERRIDE_SIGNED_INT \
	(_MK_ENUM_CONST(1))


// Register CDMA_D_DATAIN_SIZE_0_0
#define CDMA_D_DATAIN_SIZE_0_0                          (_MK_ADDR_CONST(0x501c))
#define CDMA_D_DATAIN_SIZE_0_0_SECURE                                      (0x0)
#define CDMA_D_DATAIN_SIZE_0_0_DUAL                                        (0x0)
#define CDMA_D_DATAIN_SIZE_0_0_SCR                                           (0)
#define CDMA_D_DATAIN_SIZE_0_0_WORD_COUNT                                  (0x1)
#define CDMA_D_DATAIN_SIZE_0_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_RESET_MASK           (_MK_MASK_CONST(0x1fff1fff))
#define CDMA_D_DATAIN_SIZE_0_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_READ_MASK            (_MK_MASK_CONST(0x1fff1fff))
#define CDMA_D_DATAIN_SIZE_0_0_WRITE_MASK           (_MK_MASK_CONST(0x1fff1fff))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_SHIFT           (_MK_SHIFT_CONST(0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_SHIFT))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_RANGE                         (12:0)
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_WOFFSET                        (0x0)
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_SHIFT         (_MK_SHIFT_CONST(16))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_SHIFT))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_RANGE                       (28:16)
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_WOFFSET                       (0x0)
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_0_0_DATAIN_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_DATAIN_SIZE_1_0
#define CDMA_D_DATAIN_SIZE_1_0                          (_MK_ADDR_CONST(0x5020))
#define CDMA_D_DATAIN_SIZE_1_0_SECURE                                      (0x0)
#define CDMA_D_DATAIN_SIZE_1_0_DUAL                                        (0x0)
#define CDMA_D_DATAIN_SIZE_1_0_SCR                                           (0)
#define CDMA_D_DATAIN_SIZE_1_0_WORD_COUNT                                  (0x1)
#define CDMA_D_DATAIN_SIZE_1_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_1_0_RESET_MASK               (_MK_MASK_CONST(0x1fff))
#define CDMA_D_DATAIN_SIZE_1_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_1_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_1_0_READ_MASK                (_MK_MASK_CONST(0x1fff))
#define CDMA_D_DATAIN_SIZE_1_0_WRITE_MASK               (_MK_MASK_CONST(0x1fff))
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_SHIFT         (_MK_SHIFT_CONST(0))
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_SHIFT))
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_RANGE                       (12:0)
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_WOFFSET                      (0x0)
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_1_0_DATAIN_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_DATAIN_SIZE_EXT_0_0
#define CDMA_D_DATAIN_SIZE_EXT_0_0                      (_MK_ADDR_CONST(0x5024))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_SECURE                                  (0x0)
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DUAL                                    (0x0)
#define CDMA_D_DATAIN_SIZE_EXT_0_0_SCR                                       (0)
#define CDMA_D_DATAIN_SIZE_EXT_0_0_WORD_COUNT                              (0x1)
#define CDMA_D_DATAIN_SIZE_EXT_0_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_RESET_MASK       (_MK_MASK_CONST(0x1fff1fff))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_READ_MASK        (_MK_MASK_CONST(0x1fff1fff))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_WRITE_MASK       (_MK_MASK_CONST(0x1fff1fff))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_SHIFT))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_RANGE                 (12:0)
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_WOFFSET                (0x0)
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_SHIFT \
	(_MK_SHIFT_CONST(16))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_SHIFT))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_RANGE               (28:16)
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_WOFFSET               (0x0)
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_PIXEL_OFFSET_0
#define CDMA_D_PIXEL_OFFSET_0                           (_MK_ADDR_CONST(0x5028))
#define CDMA_D_PIXEL_OFFSET_0_SECURE                                       (0x0)
#define CDMA_D_PIXEL_OFFSET_0_DUAL                                         (0x0)
#define CDMA_D_PIXEL_OFFSET_0_SCR                                            (0)
#define CDMA_D_PIXEL_OFFSET_0_WORD_COUNT                                   (0x1)
#define CDMA_D_PIXEL_OFFSET_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_RESET_MASK               (_MK_MASK_CONST(0x7001f))
#define CDMA_D_PIXEL_OFFSET_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_READ_MASK                (_MK_MASK_CONST(0x7001f))
#define CDMA_D_PIXEL_OFFSET_0_WRITE_MASK               (_MK_MASK_CONST(0x7001f))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_SHIFT          (_MK_SHIFT_CONST(0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_FIELD \
	(_MK_FIELD_CONST(0x1f, CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_SHIFT))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_RANGE                         (4:0)
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_WOFFSET                       (0x0)
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_X_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_SHIFT         (_MK_SHIFT_CONST(16))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_FIELD \
	(_MK_FIELD_CONST(0x7, CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_SHIFT))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_RANGE                       (18:16)
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_WOFFSET                       (0x0)
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PIXEL_OFFSET_0_PIXEL_Y_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_DAIN_RAM_TYPE_0
#define CDMA_D_DAIN_RAM_TYPE_0                          (_MK_ADDR_CONST(0x502c))
#define CDMA_D_DAIN_RAM_TYPE_0_SECURE                                      (0x0)
#define CDMA_D_DAIN_RAM_TYPE_0_DUAL                                        (0x0)
#define CDMA_D_DAIN_RAM_TYPE_0_SCR                                           (0)
#define CDMA_D_DAIN_RAM_TYPE_0_WORD_COUNT                                  (0x1)
#define CDMA_D_DAIN_RAM_TYPE_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_RAM_TYPE_0_RESET_MASK                  (_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_RAM_TYPE_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_RAM_TYPE_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_RAM_TYPE_0_READ_MASK                   (_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_RAM_TYPE_0_WRITE_MASK                  (_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_SHIFT        (_MK_SHIFT_CONST(0))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_SHIFT))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_RANGE                       (0:0)
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_WOFFSET                     (0x0)
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_INIT_ENUM                  (CVIF)
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_CVIF          (_MK_ENUM_CONST(0))
#define CDMA_D_DAIN_RAM_TYPE_0_DATAIN_RAM_TYPE_MCIF          (_MK_ENUM_CONST(1))


// Register CDMA_D_DAIN_ADDR_HIGH_0_0
#define CDMA_D_DAIN_ADDR_HIGH_0_0                       (_MK_ADDR_CONST(0x5030))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_SECURE                                   (0x0)
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DUAL                                     (0x0)
#define CDMA_D_DAIN_ADDR_HIGH_0_0_SCR                                        (0)
#define CDMA_D_DAIN_ADDR_HIGH_0_0_WORD_COUNT                               (0x1)
#define CDMA_D_DAIN_ADDR_HIGH_0_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_RESET_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_READ_MASK         (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_WRITE_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_SHIFT))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_RANGE                (31:0)
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_WOFFSET               (0x0)
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_0_0_DATAIN_ADDR_HIGH_0_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_DAIN_ADDR_LOW_0_0
#define CDMA_D_DAIN_ADDR_LOW_0_0                        (_MK_ADDR_CONST(0x5034))
#define CDMA_D_DAIN_ADDR_LOW_0_0_SECURE                                    (0x0)
#define CDMA_D_DAIN_ADDR_LOW_0_0_DUAL                                      (0x0)
#define CDMA_D_DAIN_ADDR_LOW_0_0_SCR                                         (0)
#define CDMA_D_DAIN_ADDR_LOW_0_0_WORD_COUNT                                (0x1)
#define CDMA_D_DAIN_ADDR_LOW_0_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_RESET_MASK         (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_READ_MASK          (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_WRITE_MASK         (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_SHIFT    (_MK_SHIFT_CONST(5))
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_SHIFT))
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_RANGE                  (31:5)
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_WOFFSET                 (0x0)
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_0_0_DATAIN_ADDR_LOW_0_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_DAIN_ADDR_HIGH_1_0
#define CDMA_D_DAIN_ADDR_HIGH_1_0                       (_MK_ADDR_CONST(0x5038))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_SECURE                                   (0x0)
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DUAL                                     (0x0)
#define CDMA_D_DAIN_ADDR_HIGH_1_0_SCR                                        (0)
#define CDMA_D_DAIN_ADDR_HIGH_1_0_WORD_COUNT                               (0x1)
#define CDMA_D_DAIN_ADDR_HIGH_1_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_RESET_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_READ_MASK         (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_WRITE_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_SHIFT))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_RANGE                (31:0)
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_WOFFSET               (0x0)
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_HIGH_1_0_DATAIN_ADDR_HIGH_1_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_DAIN_ADDR_LOW_1_0
#define CDMA_D_DAIN_ADDR_LOW_1_0                        (_MK_ADDR_CONST(0x503c))
#define CDMA_D_DAIN_ADDR_LOW_1_0_SECURE                                    (0x0)
#define CDMA_D_DAIN_ADDR_LOW_1_0_DUAL                                      (0x0)
#define CDMA_D_DAIN_ADDR_LOW_1_0_SCR                                         (0)
#define CDMA_D_DAIN_ADDR_LOW_1_0_WORD_COUNT                                (0x1)
#define CDMA_D_DAIN_ADDR_LOW_1_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_RESET_MASK         (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_READ_MASK          (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_WRITE_MASK         (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_SHIFT    (_MK_SHIFT_CONST(5))
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_SHIFT))
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_RANGE                  (31:5)
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_WOFFSET                 (0x0)
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_ADDR_LOW_1_0_DATAIN_ADDR_LOW_1_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_LINE_STRIDE_0
#define CDMA_D_LINE_STRIDE_0                            (_MK_ADDR_CONST(0x5040))
#define CDMA_D_LINE_STRIDE_0_SECURE                                        (0x0)
#define CDMA_D_LINE_STRIDE_0_DUAL                                          (0x0)
#define CDMA_D_LINE_STRIDE_0_SCR                                             (0)
#define CDMA_D_LINE_STRIDE_0_WORD_COUNT                                    (0x1)
#define CDMA_D_LINE_STRIDE_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_STRIDE_0_RESET_MASK             (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_LINE_STRIDE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_STRIDE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_STRIDE_0_READ_MASK              (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_LINE_STRIDE_0_WRITE_MASK             (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_SHIFT              (_MK_SHIFT_CONST(5))
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, CDMA_D_LINE_STRIDE_0_LINE_STRIDE_SHIFT))
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_RANGE                            (31:5)
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_WOFFSET                           (0x0)
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_STRIDE_0_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_LINE_UV_STRIDE_0
#define CDMA_D_LINE_UV_STRIDE_0                         (_MK_ADDR_CONST(0x5044))
#define CDMA_D_LINE_UV_STRIDE_0_SECURE                                     (0x0)
#define CDMA_D_LINE_UV_STRIDE_0_DUAL                                       (0x0)
#define CDMA_D_LINE_UV_STRIDE_0_SCR                                          (0)
#define CDMA_D_LINE_UV_STRIDE_0_WORD_COUNT                                 (0x1)
#define CDMA_D_LINE_UV_STRIDE_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_UV_STRIDE_0_RESET_MASK          (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_LINE_UV_STRIDE_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_UV_STRIDE_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_UV_STRIDE_0_READ_MASK           (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_LINE_UV_STRIDE_0_WRITE_MASK          (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_SHIFT        (_MK_SHIFT_CONST(5))
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_SHIFT))
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_RANGE                      (31:5)
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_WOFFSET                     (0x0)
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_LINE_UV_STRIDE_0_UV_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_SURF_STRIDE_0
#define CDMA_D_SURF_STRIDE_0                            (_MK_ADDR_CONST(0x5048))
#define CDMA_D_SURF_STRIDE_0_SECURE                                        (0x0)
#define CDMA_D_SURF_STRIDE_0_DUAL                                          (0x0)
#define CDMA_D_SURF_STRIDE_0_SCR                                             (0)
#define CDMA_D_SURF_STRIDE_0_WORD_COUNT                                    (0x1)
#define CDMA_D_SURF_STRIDE_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CDMA_D_SURF_STRIDE_0_RESET_MASK             (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_SURF_STRIDE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_SURF_STRIDE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDMA_D_SURF_STRIDE_0_READ_MASK              (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_SURF_STRIDE_0_WRITE_MASK             (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_SHIFT              (_MK_SHIFT_CONST(5))
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, CDMA_D_SURF_STRIDE_0_SURF_STRIDE_SHIFT))
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_RANGE                            (31:5)
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_WOFFSET                           (0x0)
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_SURF_STRIDE_0_SURF_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_DAIN_MAP_0
#define CDMA_D_DAIN_MAP_0                               (_MK_ADDR_CONST(0x504c))
#define CDMA_D_DAIN_MAP_0_SECURE                                           (0x0)
#define CDMA_D_DAIN_MAP_0_DUAL                                             (0x0)
#define CDMA_D_DAIN_MAP_0_SCR                                                (0)
#define CDMA_D_DAIN_MAP_0_WORD_COUNT                                       (0x1)
#define CDMA_D_DAIN_MAP_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_RESET_MASK                   (_MK_MASK_CONST(0x10001))
#define CDMA_D_DAIN_MAP_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_READ_MASK                    (_MK_MASK_CONST(0x10001))
#define CDMA_D_DAIN_MAP_0_WRITE_MASK                   (_MK_MASK_CONST(0x10001))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_SHIFT                 (_MK_SHIFT_CONST(0))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_DAIN_MAP_0_LINE_PACKED_SHIFT))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_RANGE                                (0:0)
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_WOFFSET                              (0x0)
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_INIT_ENUM                          (FALSE)
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_FALSE                  (_MK_ENUM_CONST(0))
#define CDMA_D_DAIN_MAP_0_LINE_PACKED_TRUE                   (_MK_ENUM_CONST(1))

#define CDMA_D_DAIN_MAP_0_SURF_PACKED_SHIFT                (_MK_SHIFT_CONST(16))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_DAIN_MAP_0_SURF_PACKED_SHIFT))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_RANGE                              (16:16)
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_WOFFSET                              (0x0)
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_INIT_ENUM                          (FALSE)
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_FALSE                  (_MK_ENUM_CONST(0))
#define CDMA_D_DAIN_MAP_0_SURF_PACKED_TRUE                   (_MK_ENUM_CONST(1))


// Register CDMA_D_RESERVED_X_CFG_0
#define CDMA_D_RESERVED_X_CFG_0                         (_MK_ADDR_CONST(0x5050))
#define CDMA_D_RESERVED_X_CFG_0_SECURE                                     (0x0)
#define CDMA_D_RESERVED_X_CFG_0_DUAL                                       (0x0)
#define CDMA_D_RESERVED_X_CFG_0_SCR                                          (0)
#define CDMA_D_RESERVED_X_CFG_0_WORD_COUNT                                 (0x1)
#define CDMA_D_RESERVED_X_CFG_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RESET_MASK           (_MK_MASK_CONST(0x3ff03ff))
#define CDMA_D_RESERVED_X_CFG_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_READ_MASK            (_MK_MASK_CONST(0x3ff03ff))
#define CDMA_D_RESERVED_X_CFG_0_WRITE_MASK           (_MK_MASK_CONST(0x3ff03ff))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_SHIFT          (_MK_SHIFT_CONST(0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_FIELD \
	(_MK_FIELD_CONST(0x3ff, CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_SHIFT))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_RANGE                         (9:0)
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_WOFFSET                       (0x0)
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_LINE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_SHIFT      (_MK_SHIFT_CONST(16))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_SHIFT))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_RANGE                    (25:16)
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_WOFFSET                    (0x0)
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_X_CFG_0_RSV_PER_UV_LINE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_RESERVED_Y_CFG_0
#define CDMA_D_RESERVED_Y_CFG_0                         (_MK_ADDR_CONST(0x5054))
#define CDMA_D_RESERVED_Y_CFG_0_SECURE                                     (0x0)
#define CDMA_D_RESERVED_Y_CFG_0_DUAL                                       (0x0)
#define CDMA_D_RESERVED_Y_CFG_0_SCR                                          (0)
#define CDMA_D_RESERVED_Y_CFG_0_WORD_COUNT                                 (0x1)
#define CDMA_D_RESERVED_Y_CFG_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RESET_MASK            (_MK_MASK_CONST(0x1f0007))
#define CDMA_D_RESERVED_Y_CFG_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_READ_MASK             (_MK_MASK_CONST(0x1f0007))
#define CDMA_D_RESERVED_Y_CFG_0_WRITE_MASK            (_MK_MASK_CONST(0x1f0007))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_SHIFT            (_MK_SHIFT_CONST(0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x7, CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_SHIFT))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_RANGE                           (2:0)
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_WOFFSET                         (0x0)
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_DEFAULT_MASK    (_MK_MASK_CONST(0x7))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_SHIFT          (_MK_SHIFT_CONST(16))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_FIELD \
	(_MK_FIELD_CONST(0x1f, CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_SHIFT))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_RANGE                        (20:16)
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_WOFFSET                        (0x0)
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_RESERVED_Y_CFG_0_RSV_Y_INDEX_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_BATCH_NUMBER_0
#define CDMA_D_BATCH_NUMBER_0                           (_MK_ADDR_CONST(0x5058))
#define CDMA_D_BATCH_NUMBER_0_SECURE                                       (0x0)
#define CDMA_D_BATCH_NUMBER_0_DUAL                                         (0x0)
#define CDMA_D_BATCH_NUMBER_0_SCR                                            (0)
#define CDMA_D_BATCH_NUMBER_0_WORD_COUNT                                   (0x1)
#define CDMA_D_BATCH_NUMBER_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_NUMBER_0_RESET_MASK                  (_MK_MASK_CONST(0x1f))
#define CDMA_D_BATCH_NUMBER_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_NUMBER_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_NUMBER_0_READ_MASK                   (_MK_MASK_CONST(0x1f))
#define CDMA_D_BATCH_NUMBER_0_WRITE_MASK                  (_MK_MASK_CONST(0x1f))
#define CDMA_D_BATCH_NUMBER_0_BATCHES_SHIFT                 (_MK_SHIFT_CONST(0))
#define CDMA_D_BATCH_NUMBER_0_BATCHES_FIELD \
	(_MK_FIELD_CONST(0x1f, CDMA_D_BATCH_NUMBER_0_BATCHES_SHIFT))
#define CDMA_D_BATCH_NUMBER_0_BATCHES_RANGE                                (4:0)
#define CDMA_D_BATCH_NUMBER_0_BATCHES_WOFFSET                              (0x0)
#define CDMA_D_BATCH_NUMBER_0_BATCHES_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_NUMBER_0_BATCHES_DEFAULT_MASK        (_MK_MASK_CONST(0x1f))
#define CDMA_D_BATCH_NUMBER_0_BATCHES_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_NUMBER_0_BATCHES_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_NUMBER_0_BATCHES_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_NUMBER_0_BATCHES_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_BATCH_STRIDE_0
#define CDMA_D_BATCH_STRIDE_0                           (_MK_ADDR_CONST(0x505c))
#define CDMA_D_BATCH_STRIDE_0_SECURE                                       (0x0)
#define CDMA_D_BATCH_STRIDE_0_DUAL                                         (0x0)
#define CDMA_D_BATCH_STRIDE_0_SCR                                            (0)
#define CDMA_D_BATCH_STRIDE_0_WORD_COUNT                                   (0x1)
#define CDMA_D_BATCH_STRIDE_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_STRIDE_0_RESET_MASK            (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_BATCH_STRIDE_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_STRIDE_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_STRIDE_0_READ_MASK             (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_BATCH_STRIDE_0_WRITE_MASK            (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_SHIFT            (_MK_SHIFT_CONST(5))
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_SHIFT))
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_RANGE                          (31:5)
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_WOFFSET                         (0x0)
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_BATCH_STRIDE_0_BATCH_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_ENTRY_PER_SLICE_0
#define CDMA_D_ENTRY_PER_SLICE_0                        (_MK_ADDR_CONST(0x5060))
#define CDMA_D_ENTRY_PER_SLICE_0_SECURE                                    (0x0)
#define CDMA_D_ENTRY_PER_SLICE_0_DUAL                                      (0x0)
#define CDMA_D_ENTRY_PER_SLICE_0_SCR                                         (0)
#define CDMA_D_ENTRY_PER_SLICE_0_WORD_COUNT                                (0x1)
#define CDMA_D_ENTRY_PER_SLICE_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDMA_D_ENTRY_PER_SLICE_0_RESET_MASK              (_MK_MASK_CONST(0xfff))
#define CDMA_D_ENTRY_PER_SLICE_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDMA_D_ENTRY_PER_SLICE_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_ENTRY_PER_SLICE_0_READ_MASK               (_MK_MASK_CONST(0xfff))
#define CDMA_D_ENTRY_PER_SLICE_0_WRITE_MASK              (_MK_MASK_CONST(0xfff))
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_SHIFT              (_MK_SHIFT_CONST(0))
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_FIELD \
	(_MK_FIELD_CONST(0xfff, CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_SHIFT))
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_RANGE                            (11:0)
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_WOFFSET                           (0x0)
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_DEFAULT_MASK    (_MK_MASK_CONST(0xfff))
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ENTRY_PER_SLICE_0_ENTRIES_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_FETCH_GRAIN_0
#define CDMA_D_FETCH_GRAIN_0                            (_MK_ADDR_CONST(0x5064))
#define CDMA_D_FETCH_GRAIN_0_SECURE                                        (0x0)
#define CDMA_D_FETCH_GRAIN_0_DUAL                                          (0x0)
#define CDMA_D_FETCH_GRAIN_0_SCR                                             (0)
#define CDMA_D_FETCH_GRAIN_0_WORD_COUNT                                    (0x1)
#define CDMA_D_FETCH_GRAIN_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CDMA_D_FETCH_GRAIN_0_RESET_MASK                  (_MK_MASK_CONST(0xfff))
#define CDMA_D_FETCH_GRAIN_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_FETCH_GRAIN_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDMA_D_FETCH_GRAIN_0_READ_MASK                   (_MK_MASK_CONST(0xfff))
#define CDMA_D_FETCH_GRAIN_0_WRITE_MASK                  (_MK_MASK_CONST(0xfff))
#define CDMA_D_FETCH_GRAIN_0_GRAINS_SHIFT                   (_MK_SHIFT_CONST(0))
#define CDMA_D_FETCH_GRAIN_0_GRAINS_FIELD \
	(_MK_FIELD_CONST(0xfff, CDMA_D_FETCH_GRAIN_0_GRAINS_SHIFT))
#define CDMA_D_FETCH_GRAIN_0_GRAINS_RANGE                                 (11:0)
#define CDMA_D_FETCH_GRAIN_0_GRAINS_WOFFSET                                (0x0)
#define CDMA_D_FETCH_GRAIN_0_GRAINS_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDMA_D_FETCH_GRAIN_0_GRAINS_DEFAULT_MASK         (_MK_MASK_CONST(0xfff))
#define CDMA_D_FETCH_GRAIN_0_GRAINS_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_FETCH_GRAIN_0_GRAINS_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDMA_D_FETCH_GRAIN_0_GRAINS_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CDMA_D_FETCH_GRAIN_0_GRAINS_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register CDMA_D_WEIGHT_FORMAT_0
#define CDMA_D_WEIGHT_FORMAT_0                          (_MK_ADDR_CONST(0x5068))
#define CDMA_D_WEIGHT_FORMAT_0_SECURE                                      (0x0)
#define CDMA_D_WEIGHT_FORMAT_0_DUAL                                        (0x0)
#define CDMA_D_WEIGHT_FORMAT_0_SCR                                           (0)
#define CDMA_D_WEIGHT_FORMAT_0_WORD_COUNT                                  (0x1)
#define CDMA_D_WEIGHT_FORMAT_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_FORMAT_0_RESET_MASK                  (_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_FORMAT_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_FORMAT_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_FORMAT_0_READ_MASK                   (_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_FORMAT_0_WRITE_MASK                  (_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_SHIFT          (_MK_SHIFT_CONST(0))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_SHIFT))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_RANGE                         (0:0)
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_WOFFSET                       (0x0)
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_INIT_ENUM            (UNCOMPRESSED)
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_UNCOMPRESSED    (_MK_ENUM_CONST(0))
#define CDMA_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_COMPRESSED      (_MK_ENUM_CONST(1))


// Register CDMA_D_WEIGHT_SIZE_0_0
#define CDMA_D_WEIGHT_SIZE_0_0                          (_MK_ADDR_CONST(0x506c))
#define CDMA_D_WEIGHT_SIZE_0_0_SECURE                                      (0x0)
#define CDMA_D_WEIGHT_SIZE_0_0_DUAL                                        (0x0)
#define CDMA_D_WEIGHT_SIZE_0_0_SCR                                           (0)
#define CDMA_D_WEIGHT_SIZE_0_0_WORD_COUNT                                  (0x1)
#define CDMA_D_WEIGHT_SIZE_0_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_0_0_RESET_MASK              (_MK_MASK_CONST(0x3ffff))
#define CDMA_D_WEIGHT_SIZE_0_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_0_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_0_0_READ_MASK               (_MK_MASK_CONST(0x3ffff))
#define CDMA_D_WEIGHT_SIZE_0_0_WRITE_MASK              (_MK_MASK_CONST(0x3ffff))
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_SHIFT        (_MK_SHIFT_CONST(0))
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_FIELD \
	(_MK_FIELD_CONST(0x3ffff, \
	CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_SHIFT))
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_RANGE                      (17:0)
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_WOFFSET                     (0x0)
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ffff))
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_0_0_BYTE_PER_KERNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WEIGHT_SIZE_1_0
#define CDMA_D_WEIGHT_SIZE_1_0                          (_MK_ADDR_CONST(0x5070))
#define CDMA_D_WEIGHT_SIZE_1_0_SECURE                                      (0x0)
#define CDMA_D_WEIGHT_SIZE_1_0_DUAL                                        (0x0)
#define CDMA_D_WEIGHT_SIZE_1_0_SCR                                           (0)
#define CDMA_D_WEIGHT_SIZE_1_0_WORD_COUNT                                  (0x1)
#define CDMA_D_WEIGHT_SIZE_1_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_1_0_RESET_MASK               (_MK_MASK_CONST(0x1fff))
#define CDMA_D_WEIGHT_SIZE_1_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_1_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_1_0_READ_MASK                (_MK_MASK_CONST(0x1fff))
#define CDMA_D_WEIGHT_SIZE_1_0_WRITE_MASK               (_MK_MASK_CONST(0x1fff))
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_SHIFT          (_MK_SHIFT_CONST(0))
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_SHIFT))
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_RANGE                        (12:0)
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_WOFFSET                       (0x0)
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_SIZE_1_0_WEIGHT_KERNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WEIGHT_RAM_TYPE_0
#define CDMA_D_WEIGHT_RAM_TYPE_0                        (_MK_ADDR_CONST(0x5074))
#define CDMA_D_WEIGHT_RAM_TYPE_0_SECURE                                    (0x0)
#define CDMA_D_WEIGHT_RAM_TYPE_0_DUAL                                      (0x0)
#define CDMA_D_WEIGHT_RAM_TYPE_0_SCR                                         (0)
#define CDMA_D_WEIGHT_RAM_TYPE_0_WORD_COUNT                                (0x1)
#define CDMA_D_WEIGHT_RAM_TYPE_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_RESET_MASK                (_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_RAM_TYPE_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_READ_MASK                 (_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WRITE_MASK                (_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_SHIFT      (_MK_SHIFT_CONST(0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, \
	CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_SHIFT))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_RANGE                     (0:0)
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_WOFFSET                   (0x0)
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_INIT_ENUM                (CVIF)
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_CVIF        (_MK_ENUM_CONST(0))
#define CDMA_D_WEIGHT_RAM_TYPE_0_WEIGHT_RAM_TYPE_MCIF        (_MK_ENUM_CONST(1))


// Register CDMA_D_WEIGHT_ADDR_HIGH_0
#define CDMA_D_WEIGHT_ADDR_HIGH_0                       (_MK_ADDR_CONST(0x5078))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_SECURE                                   (0x0)
#define CDMA_D_WEIGHT_ADDR_HIGH_0_DUAL                                     (0x0)
#define CDMA_D_WEIGHT_ADDR_HIGH_0_SCR                                        (0)
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WORD_COUNT                               (0x1)
#define CDMA_D_WEIGHT_ADDR_HIGH_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_RESET_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_READ_MASK         (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WRITE_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_SHIFT    (_MK_SHIFT_CONST(0))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_SHIFT))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_RANGE                  (31:0)
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_WOFFSET                 (0x0)
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_HIGH_0_WEIGHT_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WEIGHT_ADDR_LOW_0
#define CDMA_D_WEIGHT_ADDR_LOW_0                        (_MK_ADDR_CONST(0x507c))
#define CDMA_D_WEIGHT_ADDR_LOW_0_SECURE                                    (0x0)
#define CDMA_D_WEIGHT_ADDR_LOW_0_DUAL                                      (0x0)
#define CDMA_D_WEIGHT_ADDR_LOW_0_SCR                                         (0)
#define CDMA_D_WEIGHT_ADDR_LOW_0_WORD_COUNT                                (0x1)
#define CDMA_D_WEIGHT_ADDR_LOW_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_RESET_MASK         (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_READ_MASK          (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WRITE_MASK         (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_SHIFT      (_MK_SHIFT_CONST(5))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_SHIFT))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_RANGE                    (31:5)
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_WOFFSET                   (0x0)
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_ADDR_LOW_0_WEIGHT_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WEIGHT_BYTES_0
#define CDMA_D_WEIGHT_BYTES_0                           (_MK_ADDR_CONST(0x5080))
#define CDMA_D_WEIGHT_BYTES_0_SECURE                                       (0x0)
#define CDMA_D_WEIGHT_BYTES_0_DUAL                                         (0x0)
#define CDMA_D_WEIGHT_BYTES_0_SCR                                            (0)
#define CDMA_D_WEIGHT_BYTES_0_WORD_COUNT                                   (0x1)
#define CDMA_D_WEIGHT_BYTES_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_BYTES_0_RESET_MASK            (_MK_MASK_CONST(0xffffff80))
#define CDMA_D_WEIGHT_BYTES_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_BYTES_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_BYTES_0_READ_MASK             (_MK_MASK_CONST(0xffffff80))
#define CDMA_D_WEIGHT_BYTES_0_WRITE_MASK            (_MK_MASK_CONST(0xffffff80))
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_SHIFT            (_MK_SHIFT_CONST(7))
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_FIELD \
	(_MK_FIELD_CONST(0x1ffffff, \
	CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_SHIFT))
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_RANGE                          (31:7)
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_WOFFSET                         (0x0)
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1ffffff))
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WEIGHT_BYTES_0_WEIGHT_BYTES_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WGS_ADDR_HIGH_0
#define CDMA_D_WGS_ADDR_HIGH_0                          (_MK_ADDR_CONST(0x5084))
#define CDMA_D_WGS_ADDR_HIGH_0_SECURE                                      (0x0)
#define CDMA_D_WGS_ADDR_HIGH_0_DUAL                                        (0x0)
#define CDMA_D_WGS_ADDR_HIGH_0_SCR                                           (0)
#define CDMA_D_WGS_ADDR_HIGH_0_WORD_COUNT                                  (0x1)
#define CDMA_D_WGS_ADDR_HIGH_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_HIGH_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WGS_ADDR_HIGH_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_HIGH_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_HIGH_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WGS_ADDR_HIGH_0_WRITE_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_SHIFT          (_MK_SHIFT_CONST(0))
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_SHIFT))
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_RANGE                        (31:0)
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_WOFFSET                       (0x0)
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_HIGH_0_WGS_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WGS_ADDR_LOW_0
#define CDMA_D_WGS_ADDR_LOW_0                           (_MK_ADDR_CONST(0x5088))
#define CDMA_D_WGS_ADDR_LOW_0_SECURE                                       (0x0)
#define CDMA_D_WGS_ADDR_LOW_0_DUAL                                         (0x0)
#define CDMA_D_WGS_ADDR_LOW_0_SCR                                            (0)
#define CDMA_D_WGS_ADDR_LOW_0_WORD_COUNT                                   (0x1)
#define CDMA_D_WGS_ADDR_LOW_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_LOW_0_RESET_MASK            (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WGS_ADDR_LOW_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_LOW_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_LOW_0_READ_MASK             (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WGS_ADDR_LOW_0_WRITE_MASK            (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_SHIFT            (_MK_SHIFT_CONST(5))
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_SHIFT))
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_RANGE                          (31:5)
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_WOFFSET                         (0x0)
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WGS_ADDR_LOW_0_WGS_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WMB_ADDR_HIGH_0
#define CDMA_D_WMB_ADDR_HIGH_0                          (_MK_ADDR_CONST(0x508c))
#define CDMA_D_WMB_ADDR_HIGH_0_SECURE                                      (0x0)
#define CDMA_D_WMB_ADDR_HIGH_0_DUAL                                        (0x0)
#define CDMA_D_WMB_ADDR_HIGH_0_SCR                                           (0)
#define CDMA_D_WMB_ADDR_HIGH_0_WORD_COUNT                                  (0x1)
#define CDMA_D_WMB_ADDR_HIGH_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_HIGH_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WMB_ADDR_HIGH_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_HIGH_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_HIGH_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WMB_ADDR_HIGH_0_WRITE_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_SHIFT          (_MK_SHIFT_CONST(0))
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_SHIFT))
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_RANGE                        (31:0)
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_WOFFSET                       (0x0)
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_HIGH_0_WMB_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WMB_ADDR_LOW_0
#define CDMA_D_WMB_ADDR_LOW_0                           (_MK_ADDR_CONST(0x5090))
#define CDMA_D_WMB_ADDR_LOW_0_SECURE                                       (0x0)
#define CDMA_D_WMB_ADDR_LOW_0_DUAL                                         (0x0)
#define CDMA_D_WMB_ADDR_LOW_0_SCR                                            (0)
#define CDMA_D_WMB_ADDR_LOW_0_WORD_COUNT                                   (0x1)
#define CDMA_D_WMB_ADDR_LOW_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_LOW_0_RESET_MASK            (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WMB_ADDR_LOW_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_LOW_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_LOW_0_READ_MASK             (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WMB_ADDR_LOW_0_WRITE_MASK            (_MK_MASK_CONST(0xffffffe0))
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_SHIFT            (_MK_SHIFT_CONST(5))
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_SHIFT))
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_RANGE                          (31:5)
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_WOFFSET                         (0x0)
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_ADDR_LOW_0_WMB_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_WMB_BYTES_0
#define CDMA_D_WMB_BYTES_0                              (_MK_ADDR_CONST(0x5094))
#define CDMA_D_WMB_BYTES_0_SECURE                                          (0x0)
#define CDMA_D_WMB_BYTES_0_DUAL                                            (0x0)
#define CDMA_D_WMB_BYTES_0_SCR                                               (0)
#define CDMA_D_WMB_BYTES_0_WORD_COUNT                                      (0x1)
#define CDMA_D_WMB_BYTES_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_BYTES_0_RESET_MASK                (_MK_MASK_CONST(0xfffff80))
#define CDMA_D_WMB_BYTES_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_BYTES_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_BYTES_0_READ_MASK                 (_MK_MASK_CONST(0xfffff80))
#define CDMA_D_WMB_BYTES_0_WRITE_MASK                (_MK_MASK_CONST(0xfffff80))
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_SHIFT                  (_MK_SHIFT_CONST(7))
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_FIELD \
	(_MK_FIELD_CONST(0x1fffff, CDMA_D_WMB_BYTES_0_WMB_BYTES_SHIFT))
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_RANGE                                (27:7)
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_WOFFSET                               (0x0)
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_DEFAULT_MASK     (_MK_MASK_CONST(0x1fffff))
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CDMA_D_WMB_BYTES_0_WMB_BYTES_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))


// Register CDMA_D_MEAN_FORMAT_0
#define CDMA_D_MEAN_FORMAT_0                            (_MK_ADDR_CONST(0x5098))
#define CDMA_D_MEAN_FORMAT_0_SECURE                                        (0x0)
#define CDMA_D_MEAN_FORMAT_0_DUAL                                          (0x0)
#define CDMA_D_MEAN_FORMAT_0_SCR                                             (0)
#define CDMA_D_MEAN_FORMAT_0_WORD_COUNT                                    (0x1)
#define CDMA_D_MEAN_FORMAT_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_FORMAT_0_RESET_MASK                    (_MK_MASK_CONST(0x1))
#define CDMA_D_MEAN_FORMAT_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_FORMAT_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_FORMAT_0_READ_MASK                     (_MK_MASK_CONST(0x1))
#define CDMA_D_MEAN_FORMAT_0_WRITE_MASK                    (_MK_MASK_CONST(0x1))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_SHIFT              (_MK_SHIFT_CONST(0))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_SHIFT))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_RANGE                             (0:0)
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_WOFFSET                           (0x0)
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_INIT_ENUM                     (DISABLE)
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_DISABLE             (_MK_ENUM_CONST(0))
#define CDMA_D_MEAN_FORMAT_0_MEAN_FORMAT_ENABLE              (_MK_ENUM_CONST(1))


// Register CDMA_D_MEAN_GLOBAL_0_0
#define CDMA_D_MEAN_GLOBAL_0_0                          (_MK_ADDR_CONST(0x509c))
#define CDMA_D_MEAN_GLOBAL_0_0_SECURE                                      (0x0)
#define CDMA_D_MEAN_GLOBAL_0_0_DUAL                                        (0x0)
#define CDMA_D_MEAN_GLOBAL_0_0_SCR                                           (0)
#define CDMA_D_MEAN_GLOBAL_0_0_WORD_COUNT                                  (0x1)
#define CDMA_D_MEAN_GLOBAL_0_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_MEAN_GLOBAL_0_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_MEAN_GLOBAL_0_0_WRITE_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_SHIFT                (_MK_SHIFT_CONST(0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_FIELD \
	(_MK_FIELD_CONST(0xffff, CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_SHIFT))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_RANGE                              (15:0)
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_WOFFSET                             (0x0)
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_DEFAULT_MASK     (_MK_MASK_CONST(0xffff))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_RY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_SHIFT               (_MK_SHIFT_CONST(16))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_FIELD \
	(_MK_FIELD_CONST(0xffff, CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_SHIFT))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_RANGE                             (31:16)
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_WOFFSET                             (0x0)
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_DEFAULT_MASK     (_MK_MASK_CONST(0xffff))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_0_0_MEAN_GU_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_MEAN_GLOBAL_1_0
#define CDMA_D_MEAN_GLOBAL_1_0                          (_MK_ADDR_CONST(0x50a0))
#define CDMA_D_MEAN_GLOBAL_1_0_SECURE                                      (0x0)
#define CDMA_D_MEAN_GLOBAL_1_0_DUAL                                        (0x0)
#define CDMA_D_MEAN_GLOBAL_1_0_SCR                                           (0)
#define CDMA_D_MEAN_GLOBAL_1_0_WORD_COUNT                                  (0x1)
#define CDMA_D_MEAN_GLOBAL_1_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_MEAN_GLOBAL_1_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_MEAN_GLOBAL_1_0_WRITE_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_SHIFT                (_MK_SHIFT_CONST(0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_FIELD \
	(_MK_FIELD_CONST(0xffff, CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_SHIFT))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_RANGE                              (15:0)
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_WOFFSET                             (0x0)
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_DEFAULT_MASK     (_MK_MASK_CONST(0xffff))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_BV_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_SHIFT               (_MK_SHIFT_CONST(16))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_FIELD \
	(_MK_FIELD_CONST(0xffff, CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_SHIFT))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_RANGE                             (31:16)
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_WOFFSET                             (0x0)
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_DEFAULT_MASK     (_MK_MASK_CONST(0xffff))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_MEAN_GLOBAL_1_0_MEAN_AX_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_CVT_CFG_0
#define CDMA_D_CVT_CFG_0                                (_MK_ADDR_CONST(0x50a4))
#define CDMA_D_CVT_CFG_0_SECURE                                            (0x0)
#define CDMA_D_CVT_CFG_0_DUAL                                              (0x0)
#define CDMA_D_CVT_CFG_0_SCR                                                 (0)
#define CDMA_D_CVT_CFG_0_WORD_COUNT                                        (0x1)
#define CDMA_D_CVT_CFG_0_RESET_VAL                         (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_RESET_MASK                      (_MK_MASK_CONST(0x3f1))
#define CDMA_D_CVT_CFG_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_READ_MASK                       (_MK_MASK_CONST(0x3f1))
#define CDMA_D_CVT_CFG_0_WRITE_MASK                      (_MK_MASK_CONST(0x3f1))
#define CDMA_D_CVT_CFG_0_CVT_EN_SHIFT                       (_MK_SHIFT_CONST(0))
#define CDMA_D_CVT_CFG_0_CVT_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_CVT_CFG_0_CVT_EN_SHIFT))
#define CDMA_D_CVT_CFG_0_CVT_EN_RANGE                                      (0:0)
#define CDMA_D_CVT_CFG_0_CVT_EN_WOFFSET                                    (0x0)
#define CDMA_D_CVT_CFG_0_CVT_EN_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_CVT_EN_DEFAULT_MASK               (_MK_MASK_CONST(0x1))
#define CDMA_D_CVT_CFG_0_CVT_EN_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_CVT_EN_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_CVT_EN_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_CVT_EN_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define CDMA_D_CVT_CFG_0_CVT_EN_INIT_ENUM                              (DISABLE)
#define CDMA_D_CVT_CFG_0_CVT_EN_DISABLE                      (_MK_ENUM_CONST(0))
#define CDMA_D_CVT_CFG_0_CVT_EN_ENABLE                       (_MK_ENUM_CONST(1))

#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_SHIFT                 (_MK_SHIFT_CONST(4))
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_FIELD \
	(_MK_FIELD_CONST(0x3f, CDMA_D_CVT_CFG_0_CVT_TRUNCATE_SHIFT))
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_RANGE                                (9:4)
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_WOFFSET                              (0x0)
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_DEFAULT_MASK        (_MK_MASK_CONST(0x3f))
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_CFG_0_CVT_TRUNCATE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_CVT_OFFSET_0
#define CDMA_D_CVT_OFFSET_0                             (_MK_ADDR_CONST(0x50a8))
#define CDMA_D_CVT_OFFSET_0_SECURE                                         (0x0)
#define CDMA_D_CVT_OFFSET_0_DUAL                                           (0x0)
#define CDMA_D_CVT_OFFSET_0_SCR                                              (0)
#define CDMA_D_CVT_OFFSET_0_WORD_COUNT                                     (0x1)
#define CDMA_D_CVT_OFFSET_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_OFFSET_0_RESET_MASK                  (_MK_MASK_CONST(0xffff))
#define CDMA_D_CVT_OFFSET_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_OFFSET_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_OFFSET_0_READ_MASK                   (_MK_MASK_CONST(0xffff))
#define CDMA_D_CVT_OFFSET_0_WRITE_MASK                  (_MK_MASK_CONST(0xffff))
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_SHIFT                (_MK_SHIFT_CONST(0))
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_FIELD \
	(_MK_FIELD_CONST(0xffff, CDMA_D_CVT_OFFSET_0_CVT_OFFSET_SHIFT))
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_RANGE                              (15:0)
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_WOFFSET                             (0x0)
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_DEFAULT_MASK     (_MK_MASK_CONST(0xffff))
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_OFFSET_0_CVT_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_CVT_SCALE_0
#define CDMA_D_CVT_SCALE_0                              (_MK_ADDR_CONST(0x50ac))
#define CDMA_D_CVT_SCALE_0_SECURE                                          (0x0)
#define CDMA_D_CVT_SCALE_0_DUAL                                            (0x0)
#define CDMA_D_CVT_SCALE_0_SCR                                               (0)
#define CDMA_D_CVT_SCALE_0_WORD_COUNT                                      (0x1)
#define CDMA_D_CVT_SCALE_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_SCALE_0_RESET_MASK                   (_MK_MASK_CONST(0xffff))
#define CDMA_D_CVT_SCALE_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_SCALE_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_SCALE_0_READ_MASK                    (_MK_MASK_CONST(0xffff))
#define CDMA_D_CVT_SCALE_0_WRITE_MASK                   (_MK_MASK_CONST(0xffff))
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_SHIFT                  (_MK_SHIFT_CONST(0))
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, CDMA_D_CVT_SCALE_0_CVT_SCALE_SHIFT))
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_RANGE                                (15:0)
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_WOFFSET                               (0x0)
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_DEFAULT_MASK       (_MK_MASK_CONST(0xffff))
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CDMA_D_CVT_SCALE_0_CVT_SCALE_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))


// Register CDMA_D_CONV_STRIDE_0
#define CDMA_D_CONV_STRIDE_0                            (_MK_ADDR_CONST(0x50b0))
#define CDMA_D_CONV_STRIDE_0_SECURE                                        (0x0)
#define CDMA_D_CONV_STRIDE_0_DUAL                                          (0x0)
#define CDMA_D_CONV_STRIDE_0_SCR                                             (0)
#define CDMA_D_CONV_STRIDE_0_WORD_COUNT                                    (0x1)
#define CDMA_D_CONV_STRIDE_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_RESET_MASK                (_MK_MASK_CONST(0x70007))
#define CDMA_D_CONV_STRIDE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_READ_MASK                 (_MK_MASK_CONST(0x70007))
#define CDMA_D_CONV_STRIDE_0_WRITE_MASK                (_MK_MASK_CONST(0x70007))
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_SHIFT            (_MK_SHIFT_CONST(0))
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7, CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_SHIFT))
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_RANGE                           (2:0)
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_WOFFSET                         (0x0)
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_DEFAULT_MASK    (_MK_MASK_CONST(0x7))
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_CONV_X_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_SHIFT           (_MK_SHIFT_CONST(16))
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7, CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_SHIFT))
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_RANGE                         (18:16)
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_WOFFSET                         (0x0)
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_DEFAULT_MASK    (_MK_MASK_CONST(0x7))
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_CONV_STRIDE_0_CONV_Y_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_ZERO_PADDING_0
#define CDMA_D_ZERO_PADDING_0                           (_MK_ADDR_CONST(0x50b4))
#define CDMA_D_ZERO_PADDING_0_SECURE                                       (0x0)
#define CDMA_D_ZERO_PADDING_0_DUAL                                         (0x0)
#define CDMA_D_ZERO_PADDING_0_SCR                                            (0)
#define CDMA_D_ZERO_PADDING_0_WORD_COUNT                                   (0x1)
#define CDMA_D_ZERO_PADDING_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_RESET_MASK            (_MK_MASK_CONST(0x3f1f3f1f))
#define CDMA_D_ZERO_PADDING_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_READ_MASK             (_MK_MASK_CONST(0x3f1f3f1f))
#define CDMA_D_ZERO_PADDING_0_WRITE_MASK            (_MK_MASK_CONST(0x3f1f3f1f))
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_SHIFT                (_MK_SHIFT_CONST(0))
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_FIELD \
	(_MK_FIELD_CONST(0x1f, CDMA_D_ZERO_PADDING_0_PAD_LEFT_SHIFT))
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_RANGE                               (4:0)
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_WOFFSET                             (0x0)
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_DEFAULT_MASK       (_MK_MASK_CONST(0x1f))
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_LEFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_SHIFT               (_MK_SHIFT_CONST(8))
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_FIELD \
	(_MK_FIELD_CONST(0x3f, CDMA_D_ZERO_PADDING_0_PAD_RIGHT_SHIFT))
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_RANGE                             (13:8)
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_WOFFSET                            (0x0)
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_DEFAULT_MASK      (_MK_MASK_CONST(0x3f))
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_RIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_ZERO_PADDING_0_PAD_TOP_SHIFT                (_MK_SHIFT_CONST(16))
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_FIELD \
	(_MK_FIELD_CONST(0x1f, CDMA_D_ZERO_PADDING_0_PAD_TOP_SHIFT))
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_RANGE                              (20:16)
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_WOFFSET                              (0x0)
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_DEFAULT_MASK        (_MK_MASK_CONST(0x1f))
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_TOP_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_SHIFT             (_MK_SHIFT_CONST(24))
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_FIELD \
	(_MK_FIELD_CONST(0x3f, CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_SHIFT))
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_RANGE                           (29:24)
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_WOFFSET                           (0x0)
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_DEFAULT_MASK     (_MK_MASK_CONST(0x3f))
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_0_PAD_BOTTOM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_ZERO_PADDING_VALUE_0
#define CDMA_D_ZERO_PADDING_VALUE_0                     (_MK_ADDR_CONST(0x50b8))
#define CDMA_D_ZERO_PADDING_VALUE_0_SECURE                                 (0x0)
#define CDMA_D_ZERO_PADDING_VALUE_0_DUAL                                   (0x0)
#define CDMA_D_ZERO_PADDING_VALUE_0_SCR                                      (0)
#define CDMA_D_ZERO_PADDING_VALUE_0_WORD_COUNT                             (0x1)
#define CDMA_D_ZERO_PADDING_VALUE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_VALUE_0_RESET_MASK          (_MK_MASK_CONST(0xffff))
#define CDMA_D_ZERO_PADDING_VALUE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_VALUE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_VALUE_0_READ_MASK           (_MK_MASK_CONST(0xffff))
#define CDMA_D_ZERO_PADDING_VALUE_0_WRITE_MASK          (_MK_MASK_CONST(0xffff))
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_SHIFT         (_MK_SHIFT_CONST(0))
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_SHIFT))
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_RANGE                       (15:0)
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_WOFFSET                      (0x0)
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_ZERO_PADDING_VALUE_0_PAD_VALUE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_BANK_0
#define CDMA_D_BANK_0                                   (_MK_ADDR_CONST(0x50bc))
#define CDMA_D_BANK_0_SECURE                                               (0x0)
#define CDMA_D_BANK_0_DUAL                                                 (0x0)
#define CDMA_D_BANK_0_SCR                                                    (0)
#define CDMA_D_BANK_0_WORD_COUNT                                           (0x1)
#define CDMA_D_BANK_0_RESET_VAL                            (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_RESET_MASK                       (_MK_MASK_CONST(0xf000f))
#define CDMA_D_BANK_0_SW_DEFAULT_VAL                       (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_SW_DEFAULT_MASK                      (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_READ_MASK                        (_MK_MASK_CONST(0xf000f))
#define CDMA_D_BANK_0_WRITE_MASK                       (_MK_MASK_CONST(0xf000f))
#define CDMA_D_BANK_0_DATA_BANK_SHIFT                       (_MK_SHIFT_CONST(0))
#define CDMA_D_BANK_0_DATA_BANK_FIELD \
	(_MK_FIELD_CONST(0xf, CDMA_D_BANK_0_DATA_BANK_SHIFT))
#define CDMA_D_BANK_0_DATA_BANK_RANGE                                      (3:0)
#define CDMA_D_BANK_0_DATA_BANK_WOFFSET                                    (0x0)
#define CDMA_D_BANK_0_DATA_BANK_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_DATA_BANK_DEFAULT_MASK               (_MK_MASK_CONST(0xf))
#define CDMA_D_BANK_0_DATA_BANK_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_DATA_BANK_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_DATA_BANK_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_DATA_BANK_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))

#define CDMA_D_BANK_0_WEIGHT_BANK_SHIFT                    (_MK_SHIFT_CONST(16))
#define CDMA_D_BANK_0_WEIGHT_BANK_FIELD \
	(_MK_FIELD_CONST(0xf, CDMA_D_BANK_0_WEIGHT_BANK_SHIFT))
#define CDMA_D_BANK_0_WEIGHT_BANK_RANGE                                  (19:16)
#define CDMA_D_BANK_0_WEIGHT_BANK_WOFFSET                                  (0x0)
#define CDMA_D_BANK_0_WEIGHT_BANK_DEFAULT                  (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_WEIGHT_BANK_DEFAULT_MASK             (_MK_MASK_CONST(0xf))
#define CDMA_D_BANK_0_WEIGHT_BANK_SW_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_WEIGHT_BANK_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_WEIGHT_BANK_PARITY_PROTECTION        (_MK_MASK_CONST(0x0))
#define CDMA_D_BANK_0_WEIGHT_BANK_PLATFORM_DEPENDENT       (_MK_MASK_CONST(0x1))


// Register CDMA_D_NAN_FLUSH_TO_ZERO_0
#define CDMA_D_NAN_FLUSH_TO_ZERO_0                      (_MK_ADDR_CONST(0x50c0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_SECURE                                  (0x0)
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_DUAL                                    (0x0)
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_SCR                                       (0)
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_WORD_COUNT                              (0x1)
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_RESET_MASK              (_MK_MASK_CONST(0x1))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_READ_MASK               (_MK_MASK_CONST(0x1))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_WRITE_MASK              (_MK_MASK_CONST(0x1))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SHIFT        (_MK_SHIFT_CONST(0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SHIFT))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_RANGE                       (0:0)
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_WOFFSET                     (0x0)
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_INIT_ENUM               (DISABLE)
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DISABLE       (_MK_ENUM_CONST(0))
#define CDMA_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_ENABLE        (_MK_ENUM_CONST(1))


// Register CDMA_D_NAN_INPUT_DATA_NUM_0
#define CDMA_D_NAN_INPUT_DATA_NUM_0                     (_MK_ADDR_CONST(0x50c4))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_SECURE                                 (0x0)
#define CDMA_D_NAN_INPUT_DATA_NUM_0_DUAL                                   (0x0)
#define CDMA_D_NAN_INPUT_DATA_NUM_0_SCR                                      (0)
#define CDMA_D_NAN_INPUT_DATA_NUM_0_WORD_COUNT                             (0x1)
#define CDMA_D_NAN_INPUT_DATA_NUM_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_RESET_MASK      (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_READ_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_WRITE_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_SHIFT      (_MK_SHIFT_CONST(0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_SHIFT))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_RANGE                    (31:0)
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_WOFFSET                   (0x0)
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_DATA_NUM_0_NAN_DATA_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_NAN_INPUT_WEIGHT_NUM_0
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0                   (_MK_ADDR_CONST(0x50c8))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_SECURE                               (0x0)
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_DUAL                                 (0x0)
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_SCR                                    (0)
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_WORD_COUNT                           (0x1)
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_RESET_MASK    (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_READ_MASK     (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_WRITE_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_SHIFT))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_RANGE                (31:0)
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_WOFFSET               (0x0)
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_NAN_INPUT_WEIGHT_NUM_0_NAN_WEIGHT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_INF_INPUT_DATA_NUM_0
#define CDMA_D_INF_INPUT_DATA_NUM_0                     (_MK_ADDR_CONST(0x50cc))
#define CDMA_D_INF_INPUT_DATA_NUM_0_SECURE                                 (0x0)
#define CDMA_D_INF_INPUT_DATA_NUM_0_DUAL                                   (0x0)
#define CDMA_D_INF_INPUT_DATA_NUM_0_SCR                                      (0)
#define CDMA_D_INF_INPUT_DATA_NUM_0_WORD_COUNT                             (0x1)
#define CDMA_D_INF_INPUT_DATA_NUM_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_RESET_MASK      (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_INF_INPUT_DATA_NUM_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_READ_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_INF_INPUT_DATA_NUM_0_WRITE_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_SHIFT      (_MK_SHIFT_CONST(0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_SHIFT))
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_RANGE                    (31:0)
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_WOFFSET                   (0x0)
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_DATA_NUM_0_INF_DATA_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_INF_INPUT_WEIGHT_NUM_0
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0                   (_MK_ADDR_CONST(0x50d0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_SECURE                               (0x0)
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_DUAL                                 (0x0)
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_SCR                                    (0)
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_WORD_COUNT                           (0x1)
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_RESET_MASK    (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_READ_MASK     (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_WRITE_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_SHIFT))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_RANGE                (31:0)
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_WOFFSET               (0x0)
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_INF_INPUT_WEIGHT_NUM_0_INF_WEIGHT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_PERF_ENABLE_0
#define CDMA_D_PERF_ENABLE_0                            (_MK_ADDR_CONST(0x50d4))
#define CDMA_D_PERF_ENABLE_0_SECURE                                        (0x0)
#define CDMA_D_PERF_ENABLE_0_DUAL                                          (0x0)
#define CDMA_D_PERF_ENABLE_0_SCR                                             (0)
#define CDMA_D_PERF_ENABLE_0_WORD_COUNT                                    (0x1)
#define CDMA_D_PERF_ENABLE_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_ENABLE_0_RESET_MASK                    (_MK_MASK_CONST(0x1))
#define CDMA_D_PERF_ENABLE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_ENABLE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_ENABLE_0_READ_MASK                     (_MK_MASK_CONST(0x1))
#define CDMA_D_PERF_ENABLE_0_WRITE_MASK                    (_MK_MASK_CONST(0x1))
#define CDMA_D_PERF_ENABLE_0_DMA_EN_SHIFT                   (_MK_SHIFT_CONST(0))
#define CDMA_D_PERF_ENABLE_0_DMA_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CDMA_D_PERF_ENABLE_0_DMA_EN_SHIFT))
#define CDMA_D_PERF_ENABLE_0_DMA_EN_RANGE                                  (0:0)
#define CDMA_D_PERF_ENABLE_0_DMA_EN_WOFFSET                                (0x0)
#define CDMA_D_PERF_ENABLE_0_DMA_EN_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_ENABLE_0_DMA_EN_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define CDMA_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_ENABLE_0_DMA_EN_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_ENABLE_0_DMA_EN_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register CDMA_D_PERF_DAT_READ_STALL_0
#define CDMA_D_PERF_DAT_READ_STALL_0                    (_MK_ADDR_CONST(0x50d8))
#define CDMA_D_PERF_DAT_READ_STALL_0_SECURE                                (0x0)
#define CDMA_D_PERF_DAT_READ_STALL_0_DUAL                                  (0x0)
#define CDMA_D_PERF_DAT_READ_STALL_0_SCR                                     (0)
#define CDMA_D_PERF_DAT_READ_STALL_0_WORD_COUNT                            (0x1)
#define CDMA_D_PERF_DAT_READ_STALL_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_STALL_0_RESET_MASK     (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_DAT_READ_STALL_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_STALL_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_STALL_0_READ_MASK      (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_DAT_READ_STALL_0_WRITE_MASK            (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_SHIFT     (_MK_SHIFT_CONST(0))
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_SHIFT))
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_RANGE                   (31:0)
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_WOFFSET                  (0x0)
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_STALL_0_DAT_RD_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_PERF_WT_READ_STALL_0
#define CDMA_D_PERF_WT_READ_STALL_0                     (_MK_ADDR_CONST(0x50dc))
#define CDMA_D_PERF_WT_READ_STALL_0_SECURE                                 (0x0)
#define CDMA_D_PERF_WT_READ_STALL_0_DUAL                                   (0x0)
#define CDMA_D_PERF_WT_READ_STALL_0_SCR                                      (0)
#define CDMA_D_PERF_WT_READ_STALL_0_WORD_COUNT                             (0x1)
#define CDMA_D_PERF_WT_READ_STALL_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_STALL_0_RESET_MASK      (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_WT_READ_STALL_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_STALL_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_STALL_0_READ_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_WT_READ_STALL_0_WRITE_MASK             (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_SHIFT       (_MK_SHIFT_CONST(0))
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_SHIFT))
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_RANGE                     (31:0)
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_WOFFSET                    (0x0)
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_STALL_0_WT_RD_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_PERF_DAT_READ_LATENCY_0
#define CDMA_D_PERF_DAT_READ_LATENCY_0                  (_MK_ADDR_CONST(0x50e0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_SECURE                              (0x0)
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DUAL                                (0x0)
#define CDMA_D_PERF_DAT_READ_LATENCY_0_SCR                                   (0)
#define CDMA_D_PERF_DAT_READ_LATENCY_0_WORD_COUNT                          (0x1)
#define CDMA_D_PERF_DAT_READ_LATENCY_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_READ_MASK    (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_WRITE_MASK          (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_SHIFT))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_RANGE               (31:0)
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_WOFFSET              (0x0)
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_DAT_READ_LATENCY_0_DAT_RD_LATENCY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_PERF_WT_READ_LATENCY_0
#define CDMA_D_PERF_WT_READ_LATENCY_0                   (_MK_ADDR_CONST(0x50e4))
#define CDMA_D_PERF_WT_READ_LATENCY_0_SECURE                               (0x0)
#define CDMA_D_PERF_WT_READ_LATENCY_0_DUAL                                 (0x0)
#define CDMA_D_PERF_WT_READ_LATENCY_0_SCR                                    (0)
#define CDMA_D_PERF_WT_READ_LATENCY_0_WORD_COUNT                           (0x1)
#define CDMA_D_PERF_WT_READ_LATENCY_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_RESET_MASK    (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_WT_READ_LATENCY_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_READ_MASK     (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WRITE_MASK           (_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_SHIFT))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_RANGE                 (31:0)
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_WOFFSET                (0x0)
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDMA_D_PERF_WT_READ_LATENCY_0_WT_RD_LATENCY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDMA_D_CYA_0
#define CDMA_D_CYA_0                                    (_MK_ADDR_CONST(0x50e8))
#define CDMA_D_CYA_0_SECURE                                                (0x0)
#define CDMA_D_CYA_0_DUAL                                                  (0x0)
#define CDMA_D_CYA_0_SCR                                                     (0)
#define CDMA_D_CYA_0_WORD_COUNT                                            (0x1)
#define CDMA_D_CYA_0_RESET_VAL                             (_MK_MASK_CONST(0x0))
#define CDMA_D_CYA_0_RESET_MASK                     (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_CYA_0_SW_DEFAULT_VAL                        (_MK_MASK_CONST(0x0))
#define CDMA_D_CYA_0_SW_DEFAULT_MASK                       (_MK_MASK_CONST(0x0))
#define CDMA_D_CYA_0_READ_MASK                      (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_CYA_0_WRITE_MASK                     (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_CYA_0_CYA_SHIFT                              (_MK_SHIFT_CONST(0))
#define CDMA_D_CYA_0_CYA_FIELD \
	(_MK_FIELD_CONST(0xffffffff, CDMA_D_CYA_0_CYA_SHIFT))
#define CDMA_D_CYA_0_CYA_RANGE                                            (31:0)
#define CDMA_D_CYA_0_CYA_WOFFSET                                           (0x0)
#define CDMA_D_CYA_0_CYA_DEFAULT                           (_MK_MASK_CONST(0x0))
#define CDMA_D_CYA_0_CYA_DEFAULT_MASK               (_MK_MASK_CONST(0xffffffff))
#define CDMA_D_CYA_0_CYA_SW_DEFAULT                        (_MK_MASK_CONST(0x0))
#define CDMA_D_CYA_0_CYA_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CDMA_D_CYA_0_CYA_PARITY_PROTECTION                 (_MK_MASK_CONST(0x0))
#define CDMA_D_CYA_0_CYA_PLATFORM_DEPENDENT                (_MK_MASK_CONST(0x1))


// Register CSC_S_STATUS_0
#define CSC_S_STATUS_0                                  (_MK_ADDR_CONST(0x6000))
#define CSC_S_STATUS_0_SECURE                                              (0x0)
#define CSC_S_STATUS_0_DUAL                                                (0x0)
#define CSC_S_STATUS_0_SCR                                                   (0)
#define CSC_S_STATUS_0_WORD_COUNT                                          (0x1)
#define CSC_S_STATUS_0_RESET_VAL                           (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_RESET_MASK                      (_MK_MASK_CONST(0x30003))
#define CSC_S_STATUS_0_SW_DEFAULT_VAL                      (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_SW_DEFAULT_MASK                     (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_READ_MASK                       (_MK_MASK_CONST(0x30003))
#define CSC_S_STATUS_0_WRITE_MASK                          (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_0_SHIFT                       (_MK_SHIFT_CONST(0))
#define CSC_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, CSC_S_STATUS_0_STATUS_0_SHIFT))
#define CSC_S_STATUS_0_STATUS_0_RANGE                                      (1:0)
#define CSC_S_STATUS_0_STATUS_0_WOFFSET                                    (0x0)
#define CSC_S_STATUS_0_STATUS_0_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_0_DEFAULT_MASK               (_MK_MASK_CONST(0x3))
#define CSC_S_STATUS_0_STATUS_0_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_0_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define CSC_S_STATUS_0_STATUS_0_INIT_ENUM                                 (IDLE)
#define CSC_S_STATUS_0_STATUS_0_IDLE                         (_MK_ENUM_CONST(0))
#define CSC_S_STATUS_0_STATUS_0_RUNNING                      (_MK_ENUM_CONST(1))
#define CSC_S_STATUS_0_STATUS_0_PENDING                      (_MK_ENUM_CONST(2))

#define CSC_S_STATUS_0_STATUS_1_SHIFT                      (_MK_SHIFT_CONST(16))
#define CSC_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, CSC_S_STATUS_0_STATUS_1_SHIFT))
#define CSC_S_STATUS_0_STATUS_1_RANGE                                    (17:16)
#define CSC_S_STATUS_0_STATUS_1_WOFFSET                                    (0x0)
#define CSC_S_STATUS_0_STATUS_1_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_1_DEFAULT_MASK               (_MK_MASK_CONST(0x3))
#define CSC_S_STATUS_0_STATUS_1_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_1_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CSC_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define CSC_S_STATUS_0_STATUS_1_INIT_ENUM                                 (IDLE)
#define CSC_S_STATUS_0_STATUS_1_IDLE                         (_MK_ENUM_CONST(0))
#define CSC_S_STATUS_0_STATUS_1_RUNNING                      (_MK_ENUM_CONST(1))
#define CSC_S_STATUS_0_STATUS_1_PENDING                      (_MK_ENUM_CONST(2))


// Register CSC_S_POINTER_0
#define CSC_S_POINTER_0                                 (_MK_ADDR_CONST(0x6004))
#define CSC_S_POINTER_0_SECURE                                             (0x0)
#define CSC_S_POINTER_0_DUAL                                               (0x0)
#define CSC_S_POINTER_0_SCR                                                  (0)
#define CSC_S_POINTER_0_WORD_COUNT                                         (0x1)
#define CSC_S_POINTER_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_RESET_MASK                     (_MK_MASK_CONST(0x10001))
#define CSC_S_POINTER_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_READ_MASK                      (_MK_MASK_CONST(0x10001))
#define CSC_S_POINTER_0_WRITE_MASK                         (_MK_MASK_CONST(0x1))
#define CSC_S_POINTER_0_PRODUCER_SHIFT                      (_MK_SHIFT_CONST(0))
#define CSC_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_S_POINTER_0_PRODUCER_SHIFT))
#define CSC_S_POINTER_0_PRODUCER_RANGE                                     (0:0)
#define CSC_S_POINTER_0_PRODUCER_WOFFSET                                   (0x0)
#define CSC_S_POINTER_0_PRODUCER_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_PRODUCER_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define CSC_S_POINTER_0_PRODUCER_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_PRODUCER_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CSC_S_POINTER_0_PRODUCER_INIT_ENUM                             (GROUP_0)
#define CSC_S_POINTER_0_PRODUCER_GROUP_0                     (_MK_ENUM_CONST(0))
#define CSC_S_POINTER_0_PRODUCER_GROUP_1                     (_MK_ENUM_CONST(1))

#define CSC_S_POINTER_0_CONSUMER_SHIFT                     (_MK_SHIFT_CONST(16))
#define CSC_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_S_POINTER_0_CONSUMER_SHIFT))
#define CSC_S_POINTER_0_CONSUMER_RANGE                                   (16:16)
#define CSC_S_POINTER_0_CONSUMER_WOFFSET                                   (0x0)
#define CSC_S_POINTER_0_CONSUMER_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_CONSUMER_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define CSC_S_POINTER_0_CONSUMER_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_CONSUMER_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CSC_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CSC_S_POINTER_0_CONSUMER_INIT_ENUM                             (GROUP_0)
#define CSC_S_POINTER_0_CONSUMER_GROUP_0                     (_MK_ENUM_CONST(0))
#define CSC_S_POINTER_0_CONSUMER_GROUP_1                     (_MK_ENUM_CONST(1))


// Register CSC_D_OP_ENABLE_0
#define CSC_D_OP_ENABLE_0                               (_MK_ADDR_CONST(0x6008))
#define CSC_D_OP_ENABLE_0_SECURE                                           (0x0)
#define CSC_D_OP_ENABLE_0_DUAL                                             (0x0)
#define CSC_D_OP_ENABLE_0_SCR                                                (0)
#define CSC_D_OP_ENABLE_0_WORD_COUNT                                       (0x1)
#define CSC_D_OP_ENABLE_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define CSC_D_OP_ENABLE_0_RESET_MASK                       (_MK_MASK_CONST(0x1))
#define CSC_D_OP_ENABLE_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CSC_D_OP_ENABLE_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CSC_D_OP_ENABLE_0_READ_MASK                        (_MK_MASK_CONST(0x1))
#define CSC_D_OP_ENABLE_0_WRITE_MASK                       (_MK_MASK_CONST(0x1))
#define CSC_D_OP_ENABLE_0_OP_EN_SHIFT                       (_MK_SHIFT_CONST(0))
#define CSC_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_D_OP_ENABLE_0_OP_EN_SHIFT))
#define CSC_D_OP_ENABLE_0_OP_EN_RANGE                                      (0:0)
#define CSC_D_OP_ENABLE_0_OP_EN_WOFFSET                                    (0x0)
#define CSC_D_OP_ENABLE_0_OP_EN_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CSC_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK               (_MK_MASK_CONST(0x1))
#define CSC_D_OP_ENABLE_0_OP_EN_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CSC_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CSC_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CSC_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define CSC_D_OP_ENABLE_0_OP_EN_INIT_ENUM                              (DISABLE)
#define CSC_D_OP_ENABLE_0_OP_EN_DISABLE                      (_MK_ENUM_CONST(0))
#define CSC_D_OP_ENABLE_0_OP_EN_ENABLE                       (_MK_ENUM_CONST(1))


// Register CSC_D_MISC_CFG_0
#define CSC_D_MISC_CFG_0                                (_MK_ADDR_CONST(0x600c))
#define CSC_D_MISC_CFG_0_SECURE                                            (0x0)
#define CSC_D_MISC_CFG_0_DUAL                                              (0x0)
#define CSC_D_MISC_CFG_0_SCR                                                 (0)
#define CSC_D_MISC_CFG_0_WORD_COUNT                                        (0x1)
#define CSC_D_MISC_CFG_0_RESET_VAL                      (_MK_MASK_CONST(0x1100))
#define CSC_D_MISC_CFG_0_RESET_MASK                 (_MK_MASK_CONST(0x11113301))
#define CSC_D_MISC_CFG_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_READ_MASK                  (_MK_MASK_CONST(0x11113301))
#define CSC_D_MISC_CFG_0_WRITE_MASK                 (_MK_MASK_CONST(0x11113301))
#define CSC_D_MISC_CFG_0_CONV_MODE_SHIFT                    (_MK_SHIFT_CONST(0))
#define CSC_D_MISC_CFG_0_CONV_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_D_MISC_CFG_0_CONV_MODE_SHIFT))
#define CSC_D_MISC_CFG_0_CONV_MODE_RANGE                                   (0:0)
#define CSC_D_MISC_CFG_0_CONV_MODE_WOFFSET                                 (0x0)
#define CSC_D_MISC_CFG_0_CONV_MODE_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_CONV_MODE_DEFAULT_MASK            (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_CONV_MODE_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_CONV_MODE_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_CONV_MODE_INIT_ENUM                            (DIRECT)
#define CSC_D_MISC_CFG_0_CONV_MODE_DIRECT                    (_MK_ENUM_CONST(0))
#define CSC_D_MISC_CFG_0_CONV_MODE_WINOGRAD                  (_MK_ENUM_CONST(1))

#define CSC_D_MISC_CFG_0_IN_PRECISION_SHIFT                 (_MK_SHIFT_CONST(8))
#define CSC_D_MISC_CFG_0_IN_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, CSC_D_MISC_CFG_0_IN_PRECISION_SHIFT))
#define CSC_D_MISC_CFG_0_IN_PRECISION_RANGE                                (9:8)
#define CSC_D_MISC_CFG_0_IN_PRECISION_WOFFSET                              (0x0)
#define CSC_D_MISC_CFG_0_IN_PRECISION_DEFAULT              (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_IN_PRECISION_DEFAULT_MASK         (_MK_MASK_CONST(0x3))
#define CSC_D_MISC_CFG_0_IN_PRECISION_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_IN_PRECISION_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_IN_PRECISION_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_IN_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_IN_PRECISION_INIT_ENUM                          (INT16)
#define CSC_D_MISC_CFG_0_IN_PRECISION_INT8                   (_MK_ENUM_CONST(0))
#define CSC_D_MISC_CFG_0_IN_PRECISION_INT16                  (_MK_ENUM_CONST(1))
#define CSC_D_MISC_CFG_0_IN_PRECISION_FP16                   (_MK_ENUM_CONST(2))

#define CSC_D_MISC_CFG_0_PROC_PRECISION_SHIFT              (_MK_SHIFT_CONST(12))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, CSC_D_MISC_CFG_0_PROC_PRECISION_SHIFT))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_RANGE                            (13:12)
#define CSC_D_MISC_CFG_0_PROC_PRECISION_WOFFSET                            (0x0)
#define CSC_D_MISC_CFG_0_PROC_PRECISION_DEFAULT            (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_DEFAULT_MASK       (_MK_MASK_CONST(0x3))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_INIT_ENUM                        (INT16)
#define CSC_D_MISC_CFG_0_PROC_PRECISION_INT8                 (_MK_ENUM_CONST(0))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_INT16                (_MK_ENUM_CONST(1))
#define CSC_D_MISC_CFG_0_PROC_PRECISION_FP16                 (_MK_ENUM_CONST(2))

#define CSC_D_MISC_CFG_0_DATA_REUSE_SHIFT                  (_MK_SHIFT_CONST(16))
#define CSC_D_MISC_CFG_0_DATA_REUSE_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_D_MISC_CFG_0_DATA_REUSE_SHIFT))
#define CSC_D_MISC_CFG_0_DATA_REUSE_RANGE                                (16:16)
#define CSC_D_MISC_CFG_0_DATA_REUSE_WOFFSET                                (0x0)
#define CSC_D_MISC_CFG_0_DATA_REUSE_DEFAULT                (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_DATA_REUSE_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_DATA_REUSE_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_DATA_REUSE_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_DATA_REUSE_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_DATA_REUSE_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_DATA_REUSE_INIT_ENUM                          (DISABLE)
#define CSC_D_MISC_CFG_0_DATA_REUSE_DISABLE                  (_MK_ENUM_CONST(0))
#define CSC_D_MISC_CFG_0_DATA_REUSE_ENABLE                   (_MK_ENUM_CONST(1))

#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_SHIFT                (_MK_SHIFT_CONST(20))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_D_MISC_CFG_0_WEIGHT_REUSE_SHIFT))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_RANGE                              (20:20)
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_WOFFSET                              (0x0)
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_DEFAULT              (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_INIT_ENUM                        (DISABLE)
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_DISABLE                (_MK_ENUM_CONST(0))
#define CSC_D_MISC_CFG_0_WEIGHT_REUSE_ENABLE                 (_MK_ENUM_CONST(1))

#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_SHIFT               (_MK_SHIFT_CONST(24))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_D_MISC_CFG_0_SKIP_DATA_RLS_SHIFT))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_RANGE                             (24:24)
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_WOFFSET                             (0x0)
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_DEFAULT             (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_DEFAULT_MASK        (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_INIT_ENUM                       (DISABLE)
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_DISABLE               (_MK_ENUM_CONST(0))
#define CSC_D_MISC_CFG_0_SKIP_DATA_RLS_ENABLE                (_MK_ENUM_CONST(1))

#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_SHIFT             (_MK_SHIFT_CONST(28))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_SHIFT))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_RANGE                           (28:28)
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_WOFFSET                           (0x0)
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_DEFAULT           (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_INIT_ENUM                     (DISABLE)
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_DISABLE             (_MK_ENUM_CONST(0))
#define CSC_D_MISC_CFG_0_SKIP_WEIGHT_RLS_ENABLE              (_MK_ENUM_CONST(1))


// Register CSC_D_DATAIN_FORMAT_0
#define CSC_D_DATAIN_FORMAT_0                           (_MK_ADDR_CONST(0x6010))
#define CSC_D_DATAIN_FORMAT_0_SECURE                                       (0x0)
#define CSC_D_DATAIN_FORMAT_0_DUAL                                         (0x0)
#define CSC_D_DATAIN_FORMAT_0_SCR                                            (0)
#define CSC_D_DATAIN_FORMAT_0_WORD_COUNT                                   (0x1)
#define CSC_D_DATAIN_FORMAT_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_FORMAT_0_RESET_MASK                   (_MK_MASK_CONST(0x1))
#define CSC_D_DATAIN_FORMAT_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_FORMAT_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_FORMAT_0_READ_MASK                    (_MK_MASK_CONST(0x1))
#define CSC_D_DATAIN_FORMAT_0_WRITE_MASK                   (_MK_MASK_CONST(0x1))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_SHIFT           (_MK_SHIFT_CONST(0))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_SHIFT))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_RANGE                          (0:0)
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_WOFFSET                        (0x0)
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_DEFAULT        (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_INIT_ENUM                  (FEATURE)
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_FEATURE          (_MK_ENUM_CONST(0))
#define CSC_D_DATAIN_FORMAT_0_DATAIN_FORMAT_PIXEL            (_MK_ENUM_CONST(1))


// Register CSC_D_DATAIN_SIZE_EXT_0_0
#define CSC_D_DATAIN_SIZE_EXT_0_0                       (_MK_ADDR_CONST(0x6014))
#define CSC_D_DATAIN_SIZE_EXT_0_0_SECURE                                   (0x0)
#define CSC_D_DATAIN_SIZE_EXT_0_0_DUAL                                     (0x0)
#define CSC_D_DATAIN_SIZE_EXT_0_0_SCR                                        (0)
#define CSC_D_DATAIN_SIZE_EXT_0_0_WORD_COUNT                               (0x1)
#define CSC_D_DATAIN_SIZE_EXT_0_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_RESET_MASK        (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_DATAIN_SIZE_EXT_0_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_READ_MASK         (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_DATAIN_SIZE_EXT_0_0_WRITE_MASK        (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_SHIFT    (_MK_SHIFT_CONST(0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_SHIFT))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_RANGE                  (12:0)
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_WOFFSET                 (0x0)
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_WIDTH_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_SHIFT \
	(_MK_SHIFT_CONST(16))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_SHIFT))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_RANGE                (28:16)
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_WOFFSET                (0x0)
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_0_0_DATAIN_HEIGHT_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_DATAIN_SIZE_EXT_1_0
#define CSC_D_DATAIN_SIZE_EXT_1_0                       (_MK_ADDR_CONST(0x6018))
#define CSC_D_DATAIN_SIZE_EXT_1_0_SECURE                                   (0x0)
#define CSC_D_DATAIN_SIZE_EXT_1_0_DUAL                                     (0x0)
#define CSC_D_DATAIN_SIZE_EXT_1_0_SCR                                        (0)
#define CSC_D_DATAIN_SIZE_EXT_1_0_WORD_COUNT                               (0x1)
#define CSC_D_DATAIN_SIZE_EXT_1_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_1_0_RESET_MASK            (_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAIN_SIZE_EXT_1_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_1_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_1_0_READ_MASK             (_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAIN_SIZE_EXT_1_0_WRITE_MASK            (_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_SHIFT))
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_RANGE                (12:0)
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_WOFFSET               (0x0)
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAIN_SIZE_EXT_1_0_DATAIN_CHANNEL_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_BATCH_NUMBER_0
#define CSC_D_BATCH_NUMBER_0                            (_MK_ADDR_CONST(0x601c))
#define CSC_D_BATCH_NUMBER_0_SECURE                                        (0x0)
#define CSC_D_BATCH_NUMBER_0_DUAL                                          (0x0)
#define CSC_D_BATCH_NUMBER_0_SCR                                             (0)
#define CSC_D_BATCH_NUMBER_0_WORD_COUNT                                    (0x1)
#define CSC_D_BATCH_NUMBER_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CSC_D_BATCH_NUMBER_0_RESET_MASK                   (_MK_MASK_CONST(0x1f))
#define CSC_D_BATCH_NUMBER_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CSC_D_BATCH_NUMBER_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CSC_D_BATCH_NUMBER_0_READ_MASK                    (_MK_MASK_CONST(0x1f))
#define CSC_D_BATCH_NUMBER_0_WRITE_MASK                   (_MK_MASK_CONST(0x1f))
#define CSC_D_BATCH_NUMBER_0_BATCHES_SHIFT                  (_MK_SHIFT_CONST(0))
#define CSC_D_BATCH_NUMBER_0_BATCHES_FIELD \
	(_MK_FIELD_CONST(0x1f, CSC_D_BATCH_NUMBER_0_BATCHES_SHIFT))
#define CSC_D_BATCH_NUMBER_0_BATCHES_RANGE                                 (4:0)
#define CSC_D_BATCH_NUMBER_0_BATCHES_WOFFSET                               (0x0)
#define CSC_D_BATCH_NUMBER_0_BATCHES_DEFAULT               (_MK_MASK_CONST(0x0))
#define CSC_D_BATCH_NUMBER_0_BATCHES_DEFAULT_MASK         (_MK_MASK_CONST(0x1f))
#define CSC_D_BATCH_NUMBER_0_BATCHES_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CSC_D_BATCH_NUMBER_0_BATCHES_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CSC_D_BATCH_NUMBER_0_BATCHES_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CSC_D_BATCH_NUMBER_0_BATCHES_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))


// Register CSC_D_POST_Y_EXTENSION_0
#define CSC_D_POST_Y_EXTENSION_0                        (_MK_ADDR_CONST(0x6020))
#define CSC_D_POST_Y_EXTENSION_0_SECURE                                    (0x0)
#define CSC_D_POST_Y_EXTENSION_0_DUAL                                      (0x0)
#define CSC_D_POST_Y_EXTENSION_0_SCR                                         (0)
#define CSC_D_POST_Y_EXTENSION_0_WORD_COUNT                                (0x1)
#define CSC_D_POST_Y_EXTENSION_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CSC_D_POST_Y_EXTENSION_0_RESET_MASK                (_MK_MASK_CONST(0x3))
#define CSC_D_POST_Y_EXTENSION_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CSC_D_POST_Y_EXTENSION_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CSC_D_POST_Y_EXTENSION_0_READ_MASK                 (_MK_MASK_CONST(0x3))
#define CSC_D_POST_Y_EXTENSION_0_WRITE_MASK                (_MK_MASK_CONST(0x3))
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_SHIFT          (_MK_SHIFT_CONST(0))
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_FIELD \
	(_MK_FIELD_CONST(0x3, CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_SHIFT))
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_RANGE                         (1:0)
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_WOFFSET                       (0x0)
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_DEFAULT       (_MK_MASK_CONST(0x0))
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_POST_Y_EXTENSION_0_Y_EXTENSION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_ENTRY_PER_SLICE_0
#define CSC_D_ENTRY_PER_SLICE_0                         (_MK_ADDR_CONST(0x6024))
#define CSC_D_ENTRY_PER_SLICE_0_SECURE                                     (0x0)
#define CSC_D_ENTRY_PER_SLICE_0_DUAL                                       (0x0)
#define CSC_D_ENTRY_PER_SLICE_0_SCR                                          (0)
#define CSC_D_ENTRY_PER_SLICE_0_WORD_COUNT                                 (0x1)
#define CSC_D_ENTRY_PER_SLICE_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CSC_D_ENTRY_PER_SLICE_0_RESET_MASK               (_MK_MASK_CONST(0xfff))
#define CSC_D_ENTRY_PER_SLICE_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CSC_D_ENTRY_PER_SLICE_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CSC_D_ENTRY_PER_SLICE_0_READ_MASK                (_MK_MASK_CONST(0xfff))
#define CSC_D_ENTRY_PER_SLICE_0_WRITE_MASK               (_MK_MASK_CONST(0xfff))
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_SHIFT               (_MK_SHIFT_CONST(0))
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_FIELD \
	(_MK_FIELD_CONST(0xfff, CSC_D_ENTRY_PER_SLICE_0_ENTRIES_SHIFT))
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_RANGE                             (11:0)
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_WOFFSET                            (0x0)
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_DEFAULT            (_MK_MASK_CONST(0x0))
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_DEFAULT_MASK     (_MK_MASK_CONST(0xfff))
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_ENTRY_PER_SLICE_0_ENTRIES_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_WEIGHT_FORMAT_0
#define CSC_D_WEIGHT_FORMAT_0                           (_MK_ADDR_CONST(0x6028))
#define CSC_D_WEIGHT_FORMAT_0_SECURE                                       (0x0)
#define CSC_D_WEIGHT_FORMAT_0_DUAL                                         (0x0)
#define CSC_D_WEIGHT_FORMAT_0_SCR                                            (0)
#define CSC_D_WEIGHT_FORMAT_0_WORD_COUNT                                   (0x1)
#define CSC_D_WEIGHT_FORMAT_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_FORMAT_0_RESET_MASK                   (_MK_MASK_CONST(0x1))
#define CSC_D_WEIGHT_FORMAT_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_FORMAT_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_FORMAT_0_READ_MASK                    (_MK_MASK_CONST(0x1))
#define CSC_D_WEIGHT_FORMAT_0_WRITE_MASK                   (_MK_MASK_CONST(0x1))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_SHIFT           (_MK_SHIFT_CONST(0))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_FIELD \
	(_MK_FIELD_CONST(0x1, CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_SHIFT))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_RANGE                          (0:0)
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_WOFFSET                        (0x0)
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_DEFAULT        (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_INIT_ENUM             (UNCOMPRESSED)
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_UNCOMPRESSED     (_MK_ENUM_CONST(0))
#define CSC_D_WEIGHT_FORMAT_0_WEIGHT_FORMAT_COMPRESSED       (_MK_ENUM_CONST(1))


// Register CSC_D_WEIGHT_SIZE_EXT_0_0
#define CSC_D_WEIGHT_SIZE_EXT_0_0                       (_MK_ADDR_CONST(0x602c))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_SECURE                                   (0x0)
#define CSC_D_WEIGHT_SIZE_EXT_0_0_DUAL                                     (0x0)
#define CSC_D_WEIGHT_SIZE_EXT_0_0_SCR                                        (0)
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WORD_COUNT                               (0x1)
#define CSC_D_WEIGHT_SIZE_EXT_0_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_RESET_MASK          (_MK_MASK_CONST(0x1f001f))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_READ_MASK           (_MK_MASK_CONST(0x1f001f))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WRITE_MASK          (_MK_MASK_CONST(0x1f001f))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_SHIFT    (_MK_SHIFT_CONST(0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_SHIFT))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_RANGE                   (4:0)
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_WOFFSET                 (0x0)
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_WIDTH_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_SHIFT \
	(_MK_SHIFT_CONST(16))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_SHIFT))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_RANGE                (20:16)
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_WOFFSET                (0x0)
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_0_0_WEIGHT_HEIGHT_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_WEIGHT_SIZE_EXT_1_0
#define CSC_D_WEIGHT_SIZE_EXT_1_0                       (_MK_ADDR_CONST(0x6030))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_SECURE                                   (0x0)
#define CSC_D_WEIGHT_SIZE_EXT_1_0_DUAL                                     (0x0)
#define CSC_D_WEIGHT_SIZE_EXT_1_0_SCR                                        (0)
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WORD_COUNT                               (0x1)
#define CSC_D_WEIGHT_SIZE_EXT_1_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_RESET_MASK        (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_READ_MASK         (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WRITE_MASK        (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_SHIFT))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_RANGE                (12:0)
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_WOFFSET               (0x0)
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_CHANNEL_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_SHIFT      (_MK_SHIFT_CONST(16))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_SHIFT))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_RANGE                    (28:16)
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_WOFFSET                    (0x0)
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_DEFAULT    (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_SIZE_EXT_1_0_WEIGHT_KERNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_WEIGHT_BYTES_0
#define CSC_D_WEIGHT_BYTES_0                            (_MK_ADDR_CONST(0x6034))
#define CSC_D_WEIGHT_BYTES_0_SECURE                                        (0x0)
#define CSC_D_WEIGHT_BYTES_0_DUAL                                          (0x0)
#define CSC_D_WEIGHT_BYTES_0_SCR                                             (0)
#define CSC_D_WEIGHT_BYTES_0_WORD_COUNT                                    (0x1)
#define CSC_D_WEIGHT_BYTES_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_BYTES_0_RESET_MASK             (_MK_MASK_CONST(0xffffff80))
#define CSC_D_WEIGHT_BYTES_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_BYTES_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_BYTES_0_READ_MASK              (_MK_MASK_CONST(0xffffff80))
#define CSC_D_WEIGHT_BYTES_0_WRITE_MASK             (_MK_MASK_CONST(0xffffff80))
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_SHIFT             (_MK_SHIFT_CONST(7))
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_FIELD \
	(_MK_FIELD_CONST(0x1ffffff, CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_SHIFT))
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_RANGE                           (31:7)
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_WOFFSET                          (0x0)
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_DEFAULT          (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1ffffff))
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_WEIGHT_BYTES_0_WEIGHT_BYTES_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_WMB_BYTES_0
#define CSC_D_WMB_BYTES_0                               (_MK_ADDR_CONST(0x6038))
#define CSC_D_WMB_BYTES_0_SECURE                                           (0x0)
#define CSC_D_WMB_BYTES_0_DUAL                                             (0x0)
#define CSC_D_WMB_BYTES_0_SCR                                                (0)
#define CSC_D_WMB_BYTES_0_WORD_COUNT                                       (0x1)
#define CSC_D_WMB_BYTES_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define CSC_D_WMB_BYTES_0_RESET_MASK                 (_MK_MASK_CONST(0xfffff80))
#define CSC_D_WMB_BYTES_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CSC_D_WMB_BYTES_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CSC_D_WMB_BYTES_0_READ_MASK                  (_MK_MASK_CONST(0xfffff80))
#define CSC_D_WMB_BYTES_0_WRITE_MASK                 (_MK_MASK_CONST(0xfffff80))
#define CSC_D_WMB_BYTES_0_WMB_BYTES_SHIFT                   (_MK_SHIFT_CONST(7))
#define CSC_D_WMB_BYTES_0_WMB_BYTES_FIELD \
	(_MK_FIELD_CONST(0x1fffff, CSC_D_WMB_BYTES_0_WMB_BYTES_SHIFT))
#define CSC_D_WMB_BYTES_0_WMB_BYTES_RANGE                                 (27:7)
#define CSC_D_WMB_BYTES_0_WMB_BYTES_WOFFSET                                (0x0)
#define CSC_D_WMB_BYTES_0_WMB_BYTES_DEFAULT                (_MK_MASK_CONST(0x0))
#define CSC_D_WMB_BYTES_0_WMB_BYTES_DEFAULT_MASK      (_MK_MASK_CONST(0x1fffff))
#define CSC_D_WMB_BYTES_0_WMB_BYTES_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CSC_D_WMB_BYTES_0_WMB_BYTES_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CSC_D_WMB_BYTES_0_WMB_BYTES_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CSC_D_WMB_BYTES_0_WMB_BYTES_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register CSC_D_DATAOUT_SIZE_0_0
#define CSC_D_DATAOUT_SIZE_0_0                          (_MK_ADDR_CONST(0x603c))
#define CSC_D_DATAOUT_SIZE_0_0_SECURE                                      (0x0)
#define CSC_D_DATAOUT_SIZE_0_0_DUAL                                        (0x0)
#define CSC_D_DATAOUT_SIZE_0_0_SCR                                           (0)
#define CSC_D_DATAOUT_SIZE_0_0_WORD_COUNT                                  (0x1)
#define CSC_D_DATAOUT_SIZE_0_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_RESET_MASK           (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_DATAOUT_SIZE_0_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_READ_MASK            (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_DATAOUT_SIZE_0_0_WRITE_MASK           (_MK_MASK_CONST(0x1fff1fff))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_SHIFT          (_MK_SHIFT_CONST(0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_SHIFT))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_RANGE                        (12:0)
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_WOFFSET                       (0x0)
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_DEFAULT       (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_SHIFT        (_MK_SHIFT_CONST(16))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_SHIFT))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_RANGE                      (28:16)
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_WOFFSET                      (0x0)
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_DEFAULT      (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_DATAOUT_SIZE_1_0
#define CSC_D_DATAOUT_SIZE_1_0                          (_MK_ADDR_CONST(0x6040))
#define CSC_D_DATAOUT_SIZE_1_0_SECURE                                      (0x0)
#define CSC_D_DATAOUT_SIZE_1_0_DUAL                                        (0x0)
#define CSC_D_DATAOUT_SIZE_1_0_SCR                                           (0)
#define CSC_D_DATAOUT_SIZE_1_0_WORD_COUNT                                  (0x1)
#define CSC_D_DATAOUT_SIZE_1_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_1_0_RESET_MASK               (_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAOUT_SIZE_1_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_1_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_1_0_READ_MASK                (_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAOUT_SIZE_1_0_WRITE_MASK               (_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_SHIFT        (_MK_SHIFT_CONST(0))
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_SHIFT))
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_RANGE                      (12:0)
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_WOFFSET                     (0x0)
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_DEFAULT     (_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_ATOMICS_0
#define CSC_D_ATOMICS_0                                 (_MK_ADDR_CONST(0x6044))
#define CSC_D_ATOMICS_0_SECURE                                             (0x0)
#define CSC_D_ATOMICS_0_DUAL                                               (0x0)
#define CSC_D_ATOMICS_0_SCR                                                  (0)
#define CSC_D_ATOMICS_0_WORD_COUNT                                         (0x1)
#define CSC_D_ATOMICS_0_RESET_VAL                          (_MK_MASK_CONST(0x1))
#define CSC_D_ATOMICS_0_RESET_MASK                    (_MK_MASK_CONST(0x1fffff))
#define CSC_D_ATOMICS_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CSC_D_ATOMICS_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CSC_D_ATOMICS_0_READ_MASK                     (_MK_MASK_CONST(0x1fffff))
#define CSC_D_ATOMICS_0_WRITE_MASK                    (_MK_MASK_CONST(0x1fffff))
#define CSC_D_ATOMICS_0_ATOMICS_SHIFT                       (_MK_SHIFT_CONST(0))
#define CSC_D_ATOMICS_0_ATOMICS_FIELD \
	(_MK_FIELD_CONST(0x1fffff, CSC_D_ATOMICS_0_ATOMICS_SHIFT))
#define CSC_D_ATOMICS_0_ATOMICS_RANGE                                     (20:0)
#define CSC_D_ATOMICS_0_ATOMICS_WOFFSET                                    (0x0)
#define CSC_D_ATOMICS_0_ATOMICS_DEFAULT                    (_MK_MASK_CONST(0x1))
#define CSC_D_ATOMICS_0_ATOMICS_DEFAULT_MASK          (_MK_MASK_CONST(0x1fffff))
#define CSC_D_ATOMICS_0_ATOMICS_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CSC_D_ATOMICS_0_ATOMICS_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CSC_D_ATOMICS_0_ATOMICS_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CSC_D_ATOMICS_0_ATOMICS_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))


// Register CSC_D_RELEASE_0
#define CSC_D_RELEASE_0                                 (_MK_ADDR_CONST(0x6048))
#define CSC_D_RELEASE_0_SECURE                                             (0x0)
#define CSC_D_RELEASE_0_DUAL                                               (0x0)
#define CSC_D_RELEASE_0_SCR                                                  (0)
#define CSC_D_RELEASE_0_WORD_COUNT                                         (0x1)
#define CSC_D_RELEASE_0_RESET_VAL                          (_MK_MASK_CONST(0x1))
#define CSC_D_RELEASE_0_RESET_MASK                       (_MK_MASK_CONST(0xfff))
#define CSC_D_RELEASE_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CSC_D_RELEASE_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CSC_D_RELEASE_0_READ_MASK                        (_MK_MASK_CONST(0xfff))
#define CSC_D_RELEASE_0_WRITE_MASK                       (_MK_MASK_CONST(0xfff))
#define CSC_D_RELEASE_0_RLS_SLICES_SHIFT                    (_MK_SHIFT_CONST(0))
#define CSC_D_RELEASE_0_RLS_SLICES_FIELD \
	(_MK_FIELD_CONST(0xfff, CSC_D_RELEASE_0_RLS_SLICES_SHIFT))
#define CSC_D_RELEASE_0_RLS_SLICES_RANGE                                  (11:0)
#define CSC_D_RELEASE_0_RLS_SLICES_WOFFSET                                 (0x0)
#define CSC_D_RELEASE_0_RLS_SLICES_DEFAULT                 (_MK_MASK_CONST(0x1))
#define CSC_D_RELEASE_0_RLS_SLICES_DEFAULT_MASK          (_MK_MASK_CONST(0xfff))
#define CSC_D_RELEASE_0_RLS_SLICES_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CSC_D_RELEASE_0_RLS_SLICES_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CSC_D_RELEASE_0_RLS_SLICES_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CSC_D_RELEASE_0_RLS_SLICES_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))


// Register CSC_D_CONV_STRIDE_EXT_0
#define CSC_D_CONV_STRIDE_EXT_0                         (_MK_ADDR_CONST(0x604c))
#define CSC_D_CONV_STRIDE_EXT_0_SECURE                                     (0x0)
#define CSC_D_CONV_STRIDE_EXT_0_DUAL                                       (0x0)
#define CSC_D_CONV_STRIDE_EXT_0_SCR                                          (0)
#define CSC_D_CONV_STRIDE_EXT_0_WORD_COUNT                                 (0x1)
#define CSC_D_CONV_STRIDE_EXT_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_RESET_MASK             (_MK_MASK_CONST(0x70007))
#define CSC_D_CONV_STRIDE_EXT_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_READ_MASK              (_MK_MASK_CONST(0x70007))
#define CSC_D_CONV_STRIDE_EXT_0_WRITE_MASK             (_MK_MASK_CONST(0x70007))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_SHIFT     (_MK_SHIFT_CONST(0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_FIELD \
	(_MK_FIELD_CONST(0x7, \
	CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_SHIFT))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_RANGE                    (2:0)
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_WOFFSET                  (0x0)
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_X_STRIDE_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_SHIFT    (_MK_SHIFT_CONST(16))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_FIELD \
	(_MK_FIELD_CONST(0x7, \
	CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_SHIFT))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_RANGE                  (18:16)
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_WOFFSET                  (0x0)
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_CONV_STRIDE_EXT_0_CONV_Y_STRIDE_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_DILATION_EXT_0
#define CSC_D_DILATION_EXT_0                            (_MK_ADDR_CONST(0x6050))
#define CSC_D_DILATION_EXT_0_SECURE                                        (0x0)
#define CSC_D_DILATION_EXT_0_DUAL                                          (0x0)
#define CSC_D_DILATION_EXT_0_SCR                                             (0)
#define CSC_D_DILATION_EXT_0_WORD_COUNT                                    (0x1)
#define CSC_D_DILATION_EXT_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_RESET_MASK               (_MK_MASK_CONST(0x1f001f))
#define CSC_D_DILATION_EXT_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_READ_MASK                (_MK_MASK_CONST(0x1f001f))
#define CSC_D_DILATION_EXT_0_WRITE_MASK               (_MK_MASK_CONST(0x1f001f))
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_SHIFT           (_MK_SHIFT_CONST(0))
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_FIELD \
	(_MK_FIELD_CONST(0x1f, CSC_D_DILATION_EXT_0_X_DILATION_EXT_SHIFT))
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_RANGE                          (4:0)
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_WOFFSET                        (0x0)
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_DEFAULT        (_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_X_DILATION_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_SHIFT          (_MK_SHIFT_CONST(16))
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_FIELD \
	(_MK_FIELD_CONST(0x1f, CSC_D_DILATION_EXT_0_Y_DILATION_EXT_SHIFT))
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_RANGE                        (20:16)
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_WOFFSET                        (0x0)
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_DEFAULT        (_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_DILATION_EXT_0_Y_DILATION_EXT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_ZERO_PADDING_0
#define CSC_D_ZERO_PADDING_0                            (_MK_ADDR_CONST(0x6054))
#define CSC_D_ZERO_PADDING_0_SECURE                                        (0x0)
#define CSC_D_ZERO_PADDING_0_DUAL                                          (0x0)
#define CSC_D_ZERO_PADDING_0_SCR                                             (0)
#define CSC_D_ZERO_PADDING_0_WORD_COUNT                                    (0x1)
#define CSC_D_ZERO_PADDING_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_RESET_MASK               (_MK_MASK_CONST(0x1f001f))
#define CSC_D_ZERO_PADDING_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_READ_MASK                (_MK_MASK_CONST(0x1f001f))
#define CSC_D_ZERO_PADDING_0_WRITE_MASK               (_MK_MASK_CONST(0x1f001f))
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_SHIFT                 (_MK_SHIFT_CONST(0))
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_FIELD \
	(_MK_FIELD_CONST(0x1f, CSC_D_ZERO_PADDING_0_PAD_LEFT_SHIFT))
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_RANGE                                (4:0)
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_WOFFSET                              (0x0)
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_DEFAULT              (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_DEFAULT_MASK        (_MK_MASK_CONST(0x1f))
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_PAD_LEFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CSC_D_ZERO_PADDING_0_PAD_TOP_SHIFT                 (_MK_SHIFT_CONST(16))
#define CSC_D_ZERO_PADDING_0_PAD_TOP_FIELD \
	(_MK_FIELD_CONST(0x1f, CSC_D_ZERO_PADDING_0_PAD_TOP_SHIFT))
#define CSC_D_ZERO_PADDING_0_PAD_TOP_RANGE                               (20:16)
#define CSC_D_ZERO_PADDING_0_PAD_TOP_WOFFSET                               (0x0)
#define CSC_D_ZERO_PADDING_0_PAD_TOP_DEFAULT               (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_PAD_TOP_DEFAULT_MASK         (_MK_MASK_CONST(0x1f))
#define CSC_D_ZERO_PADDING_0_PAD_TOP_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_PAD_TOP_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_PAD_TOP_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_0_PAD_TOP_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))


// Register CSC_D_ZERO_PADDING_VALUE_0
#define CSC_D_ZERO_PADDING_VALUE_0                      (_MK_ADDR_CONST(0x6058))
#define CSC_D_ZERO_PADDING_VALUE_0_SECURE                                  (0x0)
#define CSC_D_ZERO_PADDING_VALUE_0_DUAL                                    (0x0)
#define CSC_D_ZERO_PADDING_VALUE_0_SCR                                       (0)
#define CSC_D_ZERO_PADDING_VALUE_0_WORD_COUNT                              (0x1)
#define CSC_D_ZERO_PADDING_VALUE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_VALUE_0_RESET_MASK           (_MK_MASK_CONST(0xffff))
#define CSC_D_ZERO_PADDING_VALUE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_VALUE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_VALUE_0_READ_MASK            (_MK_MASK_CONST(0xffff))
#define CSC_D_ZERO_PADDING_VALUE_0_WRITE_MASK           (_MK_MASK_CONST(0xffff))
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_SHIFT          (_MK_SHIFT_CONST(0))
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_FIELD \
	(_MK_FIELD_CONST(0xffff, CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_SHIFT))
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_RANGE                        (15:0)
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_WOFFSET                       (0x0)
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_DEFAULT       (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CSC_D_ZERO_PADDING_VALUE_0_PAD_VALUE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CSC_D_BANK_0
#define CSC_D_BANK_0                                    (_MK_ADDR_CONST(0x605c))
#define CSC_D_BANK_0_SECURE                                                (0x0)
#define CSC_D_BANK_0_DUAL                                                  (0x0)
#define CSC_D_BANK_0_SCR                                                     (0)
#define CSC_D_BANK_0_WORD_COUNT                                            (0x1)
#define CSC_D_BANK_0_RESET_VAL                             (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_RESET_MASK                        (_MK_MASK_CONST(0xf000f))
#define CSC_D_BANK_0_SW_DEFAULT_VAL                        (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_SW_DEFAULT_MASK                       (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_READ_MASK                         (_MK_MASK_CONST(0xf000f))
#define CSC_D_BANK_0_WRITE_MASK                        (_MK_MASK_CONST(0xf000f))
#define CSC_D_BANK_0_DATA_BANK_SHIFT                        (_MK_SHIFT_CONST(0))
#define CSC_D_BANK_0_DATA_BANK_FIELD \
	(_MK_FIELD_CONST(0xf, CSC_D_BANK_0_DATA_BANK_SHIFT))
#define CSC_D_BANK_0_DATA_BANK_RANGE                                       (3:0)
#define CSC_D_BANK_0_DATA_BANK_WOFFSET                                     (0x0)
#define CSC_D_BANK_0_DATA_BANK_DEFAULT                     (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_DATA_BANK_DEFAULT_MASK                (_MK_MASK_CONST(0xf))
#define CSC_D_BANK_0_DATA_BANK_SW_DEFAULT                  (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_DATA_BANK_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_DATA_BANK_PARITY_PROTECTION           (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_DATA_BANK_PLATFORM_DEPENDENT          (_MK_MASK_CONST(0x1))

#define CSC_D_BANK_0_WEIGHT_BANK_SHIFT                     (_MK_SHIFT_CONST(16))
#define CSC_D_BANK_0_WEIGHT_BANK_FIELD \
	(_MK_FIELD_CONST(0xf, CSC_D_BANK_0_WEIGHT_BANK_SHIFT))
#define CSC_D_BANK_0_WEIGHT_BANK_RANGE                                   (19:16)
#define CSC_D_BANK_0_WEIGHT_BANK_WOFFSET                                   (0x0)
#define CSC_D_BANK_0_WEIGHT_BANK_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_WEIGHT_BANK_DEFAULT_MASK              (_MK_MASK_CONST(0xf))
#define CSC_D_BANK_0_WEIGHT_BANK_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_WEIGHT_BANK_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_WEIGHT_BANK_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CSC_D_BANK_0_WEIGHT_BANK_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))


// Register CSC_D_PRA_CFG_0
#define CSC_D_PRA_CFG_0                                 (_MK_ADDR_CONST(0x6060))
#define CSC_D_PRA_CFG_0_SECURE                                             (0x0)
#define CSC_D_PRA_CFG_0_DUAL                                               (0x0)
#define CSC_D_PRA_CFG_0_SCR                                                  (0)
#define CSC_D_PRA_CFG_0_WORD_COUNT                                         (0x1)
#define CSC_D_PRA_CFG_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define CSC_D_PRA_CFG_0_RESET_MASK                         (_MK_MASK_CONST(0x3))
#define CSC_D_PRA_CFG_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CSC_D_PRA_CFG_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CSC_D_PRA_CFG_0_READ_MASK                          (_MK_MASK_CONST(0x3))
#define CSC_D_PRA_CFG_0_WRITE_MASK                         (_MK_MASK_CONST(0x3))
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_SHIFT                  (_MK_SHIFT_CONST(0))
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_FIELD \
	(_MK_FIELD_CONST(0x3, CSC_D_PRA_CFG_0_PRA_TRUNCATE_SHIFT))
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_RANGE                                 (1:0)
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_WOFFSET                               (0x0)
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_DEFAULT               (_MK_MASK_CONST(0x0))
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_DEFAULT_MASK          (_MK_MASK_CONST(0x3))
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CSC_D_PRA_CFG_0_PRA_TRUNCATE_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))


// Register CSC_D_CYA_0
#define CSC_D_CYA_0                                     (_MK_ADDR_CONST(0x6064))
#define CSC_D_CYA_0_SECURE                                                 (0x0)
#define CSC_D_CYA_0_DUAL                                                   (0x0)
#define CSC_D_CYA_0_SCR                                                      (0)
#define CSC_D_CYA_0_WORD_COUNT                                             (0x1)
#define CSC_D_CYA_0_RESET_VAL                              (_MK_MASK_CONST(0x0))
#define CSC_D_CYA_0_RESET_MASK                      (_MK_MASK_CONST(0xffffffff))
#define CSC_D_CYA_0_SW_DEFAULT_VAL                         (_MK_MASK_CONST(0x0))
#define CSC_D_CYA_0_SW_DEFAULT_MASK                        (_MK_MASK_CONST(0x0))
#define CSC_D_CYA_0_READ_MASK                       (_MK_MASK_CONST(0xffffffff))
#define CSC_D_CYA_0_WRITE_MASK                      (_MK_MASK_CONST(0xffffffff))
#define CSC_D_CYA_0_CYA_SHIFT                               (_MK_SHIFT_CONST(0))
#define CSC_D_CYA_0_CYA_FIELD \
	(_MK_FIELD_CONST(0xffffffff, CSC_D_CYA_0_CYA_SHIFT))
#define CSC_D_CYA_0_CYA_RANGE                                             (31:0)
#define CSC_D_CYA_0_CYA_WOFFSET                                            (0x0)
#define CSC_D_CYA_0_CYA_DEFAULT                            (_MK_MASK_CONST(0x0))
#define CSC_D_CYA_0_CYA_DEFAULT_MASK                (_MK_MASK_CONST(0xffffffff))
#define CSC_D_CYA_0_CYA_SW_DEFAULT                         (_MK_MASK_CONST(0x0))
#define CSC_D_CYA_0_CYA_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CSC_D_CYA_0_CYA_PARITY_PROTECTION                  (_MK_MASK_CONST(0x0))
#define CSC_D_CYA_0_CYA_PLATFORM_DEPENDENT                 (_MK_MASK_CONST(0x1))


// Register CMAC_A_S_STATUS_0
#define CMAC_A_S_STATUS_0                               (_MK_ADDR_CONST(0x7000))
#define CMAC_A_S_STATUS_0_SECURE                                           (0x0)
#define CMAC_A_S_STATUS_0_DUAL                                             (0x0)
#define CMAC_A_S_STATUS_0_SCR                                                (0)
#define CMAC_A_S_STATUS_0_WORD_COUNT                                       (0x1)
#define CMAC_A_S_STATUS_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_RESET_MASK                   (_MK_MASK_CONST(0x30003))
#define CMAC_A_S_STATUS_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_READ_MASK                    (_MK_MASK_CONST(0x30003))
#define CMAC_A_S_STATUS_0_WRITE_MASK                       (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_0_SHIFT                    (_MK_SHIFT_CONST(0))
#define CMAC_A_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, CMAC_A_S_STATUS_0_STATUS_0_SHIFT))
#define CMAC_A_S_STATUS_0_STATUS_0_RANGE                                   (1:0)
#define CMAC_A_S_STATUS_0_STATUS_0_WOFFSET                                 (0x0)
#define CMAC_A_S_STATUS_0_STATUS_0_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_0_DEFAULT_MASK            (_MK_MASK_CONST(0x3))
#define CMAC_A_S_STATUS_0_STATUS_0_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_0_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CMAC_A_S_STATUS_0_STATUS_0_INIT_ENUM                              (IDLE)
#define CMAC_A_S_STATUS_0_STATUS_0_IDLE                      (_MK_ENUM_CONST(0))
#define CMAC_A_S_STATUS_0_STATUS_0_RUNNING                   (_MK_ENUM_CONST(1))
#define CMAC_A_S_STATUS_0_STATUS_0_PENDING                   (_MK_ENUM_CONST(2))

#define CMAC_A_S_STATUS_0_STATUS_1_SHIFT                   (_MK_SHIFT_CONST(16))
#define CMAC_A_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, CMAC_A_S_STATUS_0_STATUS_1_SHIFT))
#define CMAC_A_S_STATUS_0_STATUS_1_RANGE                                 (17:16)
#define CMAC_A_S_STATUS_0_STATUS_1_WOFFSET                                 (0x0)
#define CMAC_A_S_STATUS_0_STATUS_1_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_1_DEFAULT_MASK            (_MK_MASK_CONST(0x3))
#define CMAC_A_S_STATUS_0_STATUS_1_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_1_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CMAC_A_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CMAC_A_S_STATUS_0_STATUS_1_INIT_ENUM                              (IDLE)
#define CMAC_A_S_STATUS_0_STATUS_1_IDLE                      (_MK_ENUM_CONST(0))
#define CMAC_A_S_STATUS_0_STATUS_1_RUNNING                   (_MK_ENUM_CONST(1))
#define CMAC_A_S_STATUS_0_STATUS_1_PENDING                   (_MK_ENUM_CONST(2))


// Register CMAC_A_S_POINTER_0
#define CMAC_A_S_POINTER_0                              (_MK_ADDR_CONST(0x7004))
#define CMAC_A_S_POINTER_0_SECURE                                          (0x0)
#define CMAC_A_S_POINTER_0_DUAL                                            (0x0)
#define CMAC_A_S_POINTER_0_SCR                                               (0)
#define CMAC_A_S_POINTER_0_WORD_COUNT                                      (0x1)
#define CMAC_A_S_POINTER_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_RESET_MASK                  (_MK_MASK_CONST(0x10001))
#define CMAC_A_S_POINTER_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_READ_MASK                   (_MK_MASK_CONST(0x10001))
#define CMAC_A_S_POINTER_0_WRITE_MASK                      (_MK_MASK_CONST(0x1))
#define CMAC_A_S_POINTER_0_PRODUCER_SHIFT                   (_MK_SHIFT_CONST(0))
#define CMAC_A_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, CMAC_A_S_POINTER_0_PRODUCER_SHIFT))
#define CMAC_A_S_POINTER_0_PRODUCER_RANGE                                  (0:0)
#define CMAC_A_S_POINTER_0_PRODUCER_WOFFSET                                (0x0)
#define CMAC_A_S_POINTER_0_PRODUCER_DEFAULT                (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_PRODUCER_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define CMAC_A_S_POINTER_0_PRODUCER_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_PRODUCER_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define CMAC_A_S_POINTER_0_PRODUCER_INIT_ENUM                          (GROUP_0)
#define CMAC_A_S_POINTER_0_PRODUCER_GROUP_0                  (_MK_ENUM_CONST(0))
#define CMAC_A_S_POINTER_0_PRODUCER_GROUP_1                  (_MK_ENUM_CONST(1))

#define CMAC_A_S_POINTER_0_CONSUMER_SHIFT                  (_MK_SHIFT_CONST(16))
#define CMAC_A_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, CMAC_A_S_POINTER_0_CONSUMER_SHIFT))
#define CMAC_A_S_POINTER_0_CONSUMER_RANGE                                (16:16)
#define CMAC_A_S_POINTER_0_CONSUMER_WOFFSET                                (0x0)
#define CMAC_A_S_POINTER_0_CONSUMER_DEFAULT                (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_CONSUMER_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define CMAC_A_S_POINTER_0_CONSUMER_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_CONSUMER_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CMAC_A_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define CMAC_A_S_POINTER_0_CONSUMER_INIT_ENUM                          (GROUP_0)
#define CMAC_A_S_POINTER_0_CONSUMER_GROUP_0                  (_MK_ENUM_CONST(0))
#define CMAC_A_S_POINTER_0_CONSUMER_GROUP_1                  (_MK_ENUM_CONST(1))


// Register CMAC_A_D_OP_ENABLE_0
#define CMAC_A_D_OP_ENABLE_0                            (_MK_ADDR_CONST(0x7008))
#define CMAC_A_D_OP_ENABLE_0_SECURE                                        (0x0)
#define CMAC_A_D_OP_ENABLE_0_DUAL                                          (0x0)
#define CMAC_A_D_OP_ENABLE_0_SCR                                             (0)
#define CMAC_A_D_OP_ENABLE_0_WORD_COUNT                                    (0x1)
#define CMAC_A_D_OP_ENABLE_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CMAC_A_D_OP_ENABLE_0_RESET_MASK                    (_MK_MASK_CONST(0x1))
#define CMAC_A_D_OP_ENABLE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CMAC_A_D_OP_ENABLE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CMAC_A_D_OP_ENABLE_0_READ_MASK                     (_MK_MASK_CONST(0x1))
#define CMAC_A_D_OP_ENABLE_0_WRITE_MASK                    (_MK_MASK_CONST(0x1))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_SHIFT                    (_MK_SHIFT_CONST(0))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CMAC_A_D_OP_ENABLE_0_OP_EN_SHIFT))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_RANGE                                   (0:0)
#define CMAC_A_D_OP_ENABLE_0_OP_EN_WOFFSET                                 (0x0)
#define CMAC_A_D_OP_ENABLE_0_OP_EN_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK            (_MK_MASK_CONST(0x1))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_INIT_ENUM                           (DISABLE)
#define CMAC_A_D_OP_ENABLE_0_OP_EN_DISABLE                   (_MK_ENUM_CONST(0))
#define CMAC_A_D_OP_ENABLE_0_OP_EN_ENABLE                    (_MK_ENUM_CONST(1))


// Register CMAC_A_D_MISC_CFG_0
#define CMAC_A_D_MISC_CFG_0                             (_MK_ADDR_CONST(0x700c))
#define CMAC_A_D_MISC_CFG_0_SECURE                                         (0x0)
#define CMAC_A_D_MISC_CFG_0_DUAL                                           (0x0)
#define CMAC_A_D_MISC_CFG_0_SCR                                              (0)
#define CMAC_A_D_MISC_CFG_0_WORD_COUNT                                     (0x1)
#define CMAC_A_D_MISC_CFG_0_RESET_VAL                   (_MK_MASK_CONST(0x1000))
#define CMAC_A_D_MISC_CFG_0_RESET_MASK                  (_MK_MASK_CONST(0x3001))
#define CMAC_A_D_MISC_CFG_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_READ_MASK                   (_MK_MASK_CONST(0x3001))
#define CMAC_A_D_MISC_CFG_0_WRITE_MASK                  (_MK_MASK_CONST(0x3001))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_SHIFT                 (_MK_SHIFT_CONST(0))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, CMAC_A_D_MISC_CFG_0_CONV_MODE_SHIFT))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_RANGE                                (0:0)
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_WOFFSET                              (0x0)
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_DEFAULT              (_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_INIT_ENUM                         (DIRECT)
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_DIRECT                 (_MK_ENUM_CONST(0))
#define CMAC_A_D_MISC_CFG_0_CONV_MODE_WINOGRAD               (_MK_ENUM_CONST(1))

#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_SHIFT           (_MK_SHIFT_CONST(12))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, CMAC_A_D_MISC_CFG_0_PROC_PRECISION_SHIFT))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_RANGE                         (13:12)
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_WOFFSET                         (0x0)
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_DEFAULT         (_MK_MASK_CONST(0x1))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_DEFAULT_MASK    (_MK_MASK_CONST(0x3))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_INIT_ENUM                     (INT16)
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_INT8              (_MK_ENUM_CONST(0))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_INT16             (_MK_ENUM_CONST(1))
#define CMAC_A_D_MISC_CFG_0_PROC_PRECISION_FP16              (_MK_ENUM_CONST(2))


// Register CMAC_B_S_STATUS_0
#define CMAC_B_S_STATUS_0                               (_MK_ADDR_CONST(0x8000))
#define CMAC_B_S_STATUS_0_SECURE                                           (0x0)
#define CMAC_B_S_STATUS_0_DUAL                                             (0x0)
#define CMAC_B_S_STATUS_0_SCR                                                (0)
#define CMAC_B_S_STATUS_0_WORD_COUNT                                       (0x1)
#define CMAC_B_S_STATUS_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_RESET_MASK                   (_MK_MASK_CONST(0x30003))
#define CMAC_B_S_STATUS_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_READ_MASK                    (_MK_MASK_CONST(0x30003))
#define CMAC_B_S_STATUS_0_WRITE_MASK                       (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_0_SHIFT                    (_MK_SHIFT_CONST(0))
#define CMAC_B_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, CMAC_B_S_STATUS_0_STATUS_0_SHIFT))
#define CMAC_B_S_STATUS_0_STATUS_0_RANGE                                   (1:0)
#define CMAC_B_S_STATUS_0_STATUS_0_WOFFSET                                 (0x0)
#define CMAC_B_S_STATUS_0_STATUS_0_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_0_DEFAULT_MASK            (_MK_MASK_CONST(0x3))
#define CMAC_B_S_STATUS_0_STATUS_0_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_0_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CMAC_B_S_STATUS_0_STATUS_0_INIT_ENUM                              (IDLE)
#define CMAC_B_S_STATUS_0_STATUS_0_IDLE                      (_MK_ENUM_CONST(0))
#define CMAC_B_S_STATUS_0_STATUS_0_RUNNING                   (_MK_ENUM_CONST(1))
#define CMAC_B_S_STATUS_0_STATUS_0_PENDING                   (_MK_ENUM_CONST(2))

#define CMAC_B_S_STATUS_0_STATUS_1_SHIFT                   (_MK_SHIFT_CONST(16))
#define CMAC_B_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, CMAC_B_S_STATUS_0_STATUS_1_SHIFT))
#define CMAC_B_S_STATUS_0_STATUS_1_RANGE                                 (17:16)
#define CMAC_B_S_STATUS_0_STATUS_1_WOFFSET                                 (0x0)
#define CMAC_B_S_STATUS_0_STATUS_1_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_1_DEFAULT_MASK            (_MK_MASK_CONST(0x3))
#define CMAC_B_S_STATUS_0_STATUS_1_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_1_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CMAC_B_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CMAC_B_S_STATUS_0_STATUS_1_INIT_ENUM                              (IDLE)
#define CMAC_B_S_STATUS_0_STATUS_1_IDLE                      (_MK_ENUM_CONST(0))
#define CMAC_B_S_STATUS_0_STATUS_1_RUNNING                   (_MK_ENUM_CONST(1))
#define CMAC_B_S_STATUS_0_STATUS_1_PENDING                   (_MK_ENUM_CONST(2))


// Register CMAC_B_S_POINTER_0
#define CMAC_B_S_POINTER_0                              (_MK_ADDR_CONST(0x8004))
#define CMAC_B_S_POINTER_0_SECURE                                          (0x0)
#define CMAC_B_S_POINTER_0_DUAL                                            (0x0)
#define CMAC_B_S_POINTER_0_SCR                                               (0)
#define CMAC_B_S_POINTER_0_WORD_COUNT                                      (0x1)
#define CMAC_B_S_POINTER_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_RESET_MASK                  (_MK_MASK_CONST(0x10001))
#define CMAC_B_S_POINTER_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_READ_MASK                   (_MK_MASK_CONST(0x10001))
#define CMAC_B_S_POINTER_0_WRITE_MASK                      (_MK_MASK_CONST(0x1))
#define CMAC_B_S_POINTER_0_PRODUCER_SHIFT                   (_MK_SHIFT_CONST(0))
#define CMAC_B_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, CMAC_B_S_POINTER_0_PRODUCER_SHIFT))
#define CMAC_B_S_POINTER_0_PRODUCER_RANGE                                  (0:0)
#define CMAC_B_S_POINTER_0_PRODUCER_WOFFSET                                (0x0)
#define CMAC_B_S_POINTER_0_PRODUCER_DEFAULT                (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_PRODUCER_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define CMAC_B_S_POINTER_0_PRODUCER_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_PRODUCER_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define CMAC_B_S_POINTER_0_PRODUCER_INIT_ENUM                          (GROUP_0)
#define CMAC_B_S_POINTER_0_PRODUCER_GROUP_0                  (_MK_ENUM_CONST(0))
#define CMAC_B_S_POINTER_0_PRODUCER_GROUP_1                  (_MK_ENUM_CONST(1))

#define CMAC_B_S_POINTER_0_CONSUMER_SHIFT                  (_MK_SHIFT_CONST(16))
#define CMAC_B_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, CMAC_B_S_POINTER_0_CONSUMER_SHIFT))
#define CMAC_B_S_POINTER_0_CONSUMER_RANGE                                (16:16)
#define CMAC_B_S_POINTER_0_CONSUMER_WOFFSET                                (0x0)
#define CMAC_B_S_POINTER_0_CONSUMER_DEFAULT                (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_CONSUMER_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define CMAC_B_S_POINTER_0_CONSUMER_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_CONSUMER_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CMAC_B_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define CMAC_B_S_POINTER_0_CONSUMER_INIT_ENUM                          (GROUP_0)
#define CMAC_B_S_POINTER_0_CONSUMER_GROUP_0                  (_MK_ENUM_CONST(0))
#define CMAC_B_S_POINTER_0_CONSUMER_GROUP_1                  (_MK_ENUM_CONST(1))


// Register CMAC_B_D_OP_ENABLE_0
#define CMAC_B_D_OP_ENABLE_0                            (_MK_ADDR_CONST(0x8008))
#define CMAC_B_D_OP_ENABLE_0_SECURE                                        (0x0)
#define CMAC_B_D_OP_ENABLE_0_DUAL                                          (0x0)
#define CMAC_B_D_OP_ENABLE_0_SCR                                             (0)
#define CMAC_B_D_OP_ENABLE_0_WORD_COUNT                                    (0x1)
#define CMAC_B_D_OP_ENABLE_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CMAC_B_D_OP_ENABLE_0_RESET_MASK                    (_MK_MASK_CONST(0x1))
#define CMAC_B_D_OP_ENABLE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CMAC_B_D_OP_ENABLE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CMAC_B_D_OP_ENABLE_0_READ_MASK                     (_MK_MASK_CONST(0x1))
#define CMAC_B_D_OP_ENABLE_0_WRITE_MASK                    (_MK_MASK_CONST(0x1))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_SHIFT                    (_MK_SHIFT_CONST(0))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CMAC_B_D_OP_ENABLE_0_OP_EN_SHIFT))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_RANGE                                   (0:0)
#define CMAC_B_D_OP_ENABLE_0_OP_EN_WOFFSET                                 (0x0)
#define CMAC_B_D_OP_ENABLE_0_OP_EN_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK            (_MK_MASK_CONST(0x1))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_INIT_ENUM                           (DISABLE)
#define CMAC_B_D_OP_ENABLE_0_OP_EN_DISABLE                   (_MK_ENUM_CONST(0))
#define CMAC_B_D_OP_ENABLE_0_OP_EN_ENABLE                    (_MK_ENUM_CONST(1))


// Register CMAC_B_D_MISC_CFG_0
#define CMAC_B_D_MISC_CFG_0                             (_MK_ADDR_CONST(0x800c))
#define CMAC_B_D_MISC_CFG_0_SECURE                                         (0x0)
#define CMAC_B_D_MISC_CFG_0_DUAL                                           (0x0)
#define CMAC_B_D_MISC_CFG_0_SCR                                              (0)
#define CMAC_B_D_MISC_CFG_0_WORD_COUNT                                     (0x1)
#define CMAC_B_D_MISC_CFG_0_RESET_VAL                   (_MK_MASK_CONST(0x1000))
#define CMAC_B_D_MISC_CFG_0_RESET_MASK                  (_MK_MASK_CONST(0x3001))
#define CMAC_B_D_MISC_CFG_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_READ_MASK                   (_MK_MASK_CONST(0x3001))
#define CMAC_B_D_MISC_CFG_0_WRITE_MASK                  (_MK_MASK_CONST(0x3001))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_SHIFT                 (_MK_SHIFT_CONST(0))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, CMAC_B_D_MISC_CFG_0_CONV_MODE_SHIFT))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_RANGE                                (0:0)
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_WOFFSET                              (0x0)
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_DEFAULT              (_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_INIT_ENUM                         (DIRECT)
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_DIRECT                 (_MK_ENUM_CONST(0))
#define CMAC_B_D_MISC_CFG_0_CONV_MODE_WINOGRAD               (_MK_ENUM_CONST(1))

#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_SHIFT           (_MK_SHIFT_CONST(12))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, CMAC_B_D_MISC_CFG_0_PROC_PRECISION_SHIFT))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_RANGE                         (13:12)
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_WOFFSET                         (0x0)
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_DEFAULT         (_MK_MASK_CONST(0x1))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_DEFAULT_MASK    (_MK_MASK_CONST(0x3))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_INIT_ENUM                     (INT16)
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_INT8              (_MK_ENUM_CONST(0))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_INT16             (_MK_ENUM_CONST(1))
#define CMAC_B_D_MISC_CFG_0_PROC_PRECISION_FP16              (_MK_ENUM_CONST(2))


// Register CACC_S_STATUS_0
#define CACC_S_STATUS_0                                 (_MK_ADDR_CONST(0x9000))
#define CACC_S_STATUS_0_SECURE                                             (0x0)
#define CACC_S_STATUS_0_DUAL                                               (0x0)
#define CACC_S_STATUS_0_SCR                                                  (0)
#define CACC_S_STATUS_0_WORD_COUNT                                         (0x1)
#define CACC_S_STATUS_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_RESET_MASK                     (_MK_MASK_CONST(0x30003))
#define CACC_S_STATUS_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_READ_MASK                      (_MK_MASK_CONST(0x30003))
#define CACC_S_STATUS_0_WRITE_MASK                         (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_0_SHIFT                      (_MK_SHIFT_CONST(0))
#define CACC_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, CACC_S_STATUS_0_STATUS_0_SHIFT))
#define CACC_S_STATUS_0_STATUS_0_RANGE                                     (1:0)
#define CACC_S_STATUS_0_STATUS_0_WOFFSET                                   (0x0)
#define CACC_S_STATUS_0_STATUS_0_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_0_DEFAULT_MASK              (_MK_MASK_CONST(0x3))
#define CACC_S_STATUS_0_STATUS_0_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_0_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CACC_S_STATUS_0_STATUS_0_INIT_ENUM                                (IDLE)
#define CACC_S_STATUS_0_STATUS_0_IDLE                        (_MK_ENUM_CONST(0))
#define CACC_S_STATUS_0_STATUS_0_RUNNING                     (_MK_ENUM_CONST(1))
#define CACC_S_STATUS_0_STATUS_0_PENDING                     (_MK_ENUM_CONST(2))

#define CACC_S_STATUS_0_STATUS_1_SHIFT                     (_MK_SHIFT_CONST(16))
#define CACC_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, CACC_S_STATUS_0_STATUS_1_SHIFT))
#define CACC_S_STATUS_0_STATUS_1_RANGE                                   (17:16)
#define CACC_S_STATUS_0_STATUS_1_WOFFSET                                   (0x0)
#define CACC_S_STATUS_0_STATUS_1_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_1_DEFAULT_MASK              (_MK_MASK_CONST(0x3))
#define CACC_S_STATUS_0_STATUS_1_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_1_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CACC_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CACC_S_STATUS_0_STATUS_1_INIT_ENUM                                (IDLE)
#define CACC_S_STATUS_0_STATUS_1_IDLE                        (_MK_ENUM_CONST(0))
#define CACC_S_STATUS_0_STATUS_1_RUNNING                     (_MK_ENUM_CONST(1))
#define CACC_S_STATUS_0_STATUS_1_PENDING                     (_MK_ENUM_CONST(2))


// Register CACC_S_POINTER_0
#define CACC_S_POINTER_0                                (_MK_ADDR_CONST(0x9004))
#define CACC_S_POINTER_0_SECURE                                            (0x0)
#define CACC_S_POINTER_0_DUAL                                              (0x0)
#define CACC_S_POINTER_0_SCR                                                 (0)
#define CACC_S_POINTER_0_WORD_COUNT                                        (0x1)
#define CACC_S_POINTER_0_RESET_VAL                         (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_RESET_MASK                    (_MK_MASK_CONST(0x10001))
#define CACC_S_POINTER_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_READ_MASK                     (_MK_MASK_CONST(0x10001))
#define CACC_S_POINTER_0_WRITE_MASK                        (_MK_MASK_CONST(0x1))
#define CACC_S_POINTER_0_PRODUCER_SHIFT                     (_MK_SHIFT_CONST(0))
#define CACC_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, CACC_S_POINTER_0_PRODUCER_SHIFT))
#define CACC_S_POINTER_0_PRODUCER_RANGE                                    (0:0)
#define CACC_S_POINTER_0_PRODUCER_WOFFSET                                  (0x0)
#define CACC_S_POINTER_0_PRODUCER_DEFAULT                  (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_PRODUCER_DEFAULT_MASK             (_MK_MASK_CONST(0x1))
#define CACC_S_POINTER_0_PRODUCER_SW_DEFAULT               (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_PRODUCER_PARITY_PROTECTION        (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT       (_MK_MASK_CONST(0x1))
#define CACC_S_POINTER_0_PRODUCER_INIT_ENUM                            (GROUP_0)
#define CACC_S_POINTER_0_PRODUCER_GROUP_0                    (_MK_ENUM_CONST(0))
#define CACC_S_POINTER_0_PRODUCER_GROUP_1                    (_MK_ENUM_CONST(1))

#define CACC_S_POINTER_0_CONSUMER_SHIFT                    (_MK_SHIFT_CONST(16))
#define CACC_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, CACC_S_POINTER_0_CONSUMER_SHIFT))
#define CACC_S_POINTER_0_CONSUMER_RANGE                                  (16:16)
#define CACC_S_POINTER_0_CONSUMER_WOFFSET                                  (0x0)
#define CACC_S_POINTER_0_CONSUMER_DEFAULT                  (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_CONSUMER_DEFAULT_MASK             (_MK_MASK_CONST(0x1))
#define CACC_S_POINTER_0_CONSUMER_SW_DEFAULT               (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_CONSUMER_PARITY_PROTECTION        (_MK_MASK_CONST(0x0))
#define CACC_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT       (_MK_MASK_CONST(0x1))
#define CACC_S_POINTER_0_CONSUMER_INIT_ENUM                            (GROUP_0)
#define CACC_S_POINTER_0_CONSUMER_GROUP_0                    (_MK_ENUM_CONST(0))
#define CACC_S_POINTER_0_CONSUMER_GROUP_1                    (_MK_ENUM_CONST(1))


// Register CACC_D_OP_ENABLE_0
#define CACC_D_OP_ENABLE_0                              (_MK_ADDR_CONST(0x9008))
#define CACC_D_OP_ENABLE_0_SECURE                                          (0x0)
#define CACC_D_OP_ENABLE_0_DUAL                                            (0x0)
#define CACC_D_OP_ENABLE_0_SCR                                               (0)
#define CACC_D_OP_ENABLE_0_WORD_COUNT                                      (0x1)
#define CACC_D_OP_ENABLE_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define CACC_D_OP_ENABLE_0_RESET_MASK                      (_MK_MASK_CONST(0x1))
#define CACC_D_OP_ENABLE_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define CACC_D_OP_ENABLE_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define CACC_D_OP_ENABLE_0_READ_MASK                       (_MK_MASK_CONST(0x1))
#define CACC_D_OP_ENABLE_0_WRITE_MASK                      (_MK_MASK_CONST(0x1))
#define CACC_D_OP_ENABLE_0_OP_EN_SHIFT                      (_MK_SHIFT_CONST(0))
#define CACC_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CACC_D_OP_ENABLE_0_OP_EN_SHIFT))
#define CACC_D_OP_ENABLE_0_OP_EN_RANGE                                     (0:0)
#define CACC_D_OP_ENABLE_0_OP_EN_WOFFSET                                   (0x0)
#define CACC_D_OP_ENABLE_0_OP_EN_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CACC_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define CACC_D_OP_ENABLE_0_OP_EN_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CACC_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CACC_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CACC_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CACC_D_OP_ENABLE_0_OP_EN_INIT_ENUM                             (DISABLE)
#define CACC_D_OP_ENABLE_0_OP_EN_DISABLE                     (_MK_ENUM_CONST(0))
#define CACC_D_OP_ENABLE_0_OP_EN_ENABLE                      (_MK_ENUM_CONST(1))


// Register CACC_D_MISC_CFG_0
#define CACC_D_MISC_CFG_0                               (_MK_ADDR_CONST(0x900c))
#define CACC_D_MISC_CFG_0_SECURE                                           (0x0)
#define CACC_D_MISC_CFG_0_DUAL                                             (0x0)
#define CACC_D_MISC_CFG_0_SCR                                                (0)
#define CACC_D_MISC_CFG_0_WORD_COUNT                                       (0x1)
#define CACC_D_MISC_CFG_0_RESET_VAL                     (_MK_MASK_CONST(0x1000))
#define CACC_D_MISC_CFG_0_RESET_MASK                    (_MK_MASK_CONST(0x3001))
#define CACC_D_MISC_CFG_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_READ_MASK                     (_MK_MASK_CONST(0x3001))
#define CACC_D_MISC_CFG_0_WRITE_MASK                    (_MK_MASK_CONST(0x3001))
#define CACC_D_MISC_CFG_0_CONV_MODE_SHIFT                   (_MK_SHIFT_CONST(0))
#define CACC_D_MISC_CFG_0_CONV_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, CACC_D_MISC_CFG_0_CONV_MODE_SHIFT))
#define CACC_D_MISC_CFG_0_CONV_MODE_RANGE                                  (0:0)
#define CACC_D_MISC_CFG_0_CONV_MODE_WOFFSET                                (0x0)
#define CACC_D_MISC_CFG_0_CONV_MODE_DEFAULT                (_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_CONV_MODE_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define CACC_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_CONV_MODE_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_CONV_MODE_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_CONV_MODE_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define CACC_D_MISC_CFG_0_CONV_MODE_INIT_ENUM                           (DIRECT)
#define CACC_D_MISC_CFG_0_CONV_MODE_DIRECT                   (_MK_ENUM_CONST(0))
#define CACC_D_MISC_CFG_0_CONV_MODE_WINOGRAD                 (_MK_ENUM_CONST(1))

#define CACC_D_MISC_CFG_0_PROC_PRECISION_SHIFT             (_MK_SHIFT_CONST(12))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, CACC_D_MISC_CFG_0_PROC_PRECISION_SHIFT))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_RANGE                           (13:12)
#define CACC_D_MISC_CFG_0_PROC_PRECISION_WOFFSET                           (0x0)
#define CACC_D_MISC_CFG_0_PROC_PRECISION_DEFAULT           (_MK_MASK_CONST(0x1))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_DEFAULT_MASK      (_MK_MASK_CONST(0x3))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_INIT_ENUM                       (INT16)
#define CACC_D_MISC_CFG_0_PROC_PRECISION_INT8                (_MK_ENUM_CONST(0))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_INT16               (_MK_ENUM_CONST(1))
#define CACC_D_MISC_CFG_0_PROC_PRECISION_FP16                (_MK_ENUM_CONST(2))


// Register CACC_D_DATAOUT_SIZE_0_0
#define CACC_D_DATAOUT_SIZE_0_0                         (_MK_ADDR_CONST(0x9010))
#define CACC_D_DATAOUT_SIZE_0_0_SECURE                                     (0x0)
#define CACC_D_DATAOUT_SIZE_0_0_DUAL                                       (0x0)
#define CACC_D_DATAOUT_SIZE_0_0_SCR                                          (0)
#define CACC_D_DATAOUT_SIZE_0_0_WORD_COUNT                                 (0x1)
#define CACC_D_DATAOUT_SIZE_0_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_RESET_MASK          (_MK_MASK_CONST(0x1fff1fff))
#define CACC_D_DATAOUT_SIZE_0_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_READ_MASK           (_MK_MASK_CONST(0x1fff1fff))
#define CACC_D_DATAOUT_SIZE_0_0_WRITE_MASK          (_MK_MASK_CONST(0x1fff1fff))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_SHIFT         (_MK_SHIFT_CONST(0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_SHIFT))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_RANGE                       (12:0)
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_WOFFSET                      (0x0)
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_DEFAULT      (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_SHIFT       (_MK_SHIFT_CONST(16))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_SHIFT))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_RANGE                     (28:16)
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_WOFFSET                     (0x0)
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_DEFAULT     (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_0_0_DATAOUT_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CACC_D_DATAOUT_SIZE_1_0
#define CACC_D_DATAOUT_SIZE_1_0                         (_MK_ADDR_CONST(0x9014))
#define CACC_D_DATAOUT_SIZE_1_0_SECURE                                     (0x0)
#define CACC_D_DATAOUT_SIZE_1_0_DUAL                                       (0x0)
#define CACC_D_DATAOUT_SIZE_1_0_SCR                                          (0)
#define CACC_D_DATAOUT_SIZE_1_0_WORD_COUNT                                 (0x1)
#define CACC_D_DATAOUT_SIZE_1_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_1_0_RESET_MASK              (_MK_MASK_CONST(0x1fff))
#define CACC_D_DATAOUT_SIZE_1_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_1_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_1_0_READ_MASK               (_MK_MASK_CONST(0x1fff))
#define CACC_D_DATAOUT_SIZE_1_0_WRITE_MASK              (_MK_MASK_CONST(0x1fff))
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_SHIFT       (_MK_SHIFT_CONST(0))
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_SHIFT))
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_RANGE                     (12:0)
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_WOFFSET                    (0x0)
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_DEFAULT    (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_SIZE_1_0_DATAOUT_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CACC_D_DATAOUT_ADDR_0
#define CACC_D_DATAOUT_ADDR_0                           (_MK_ADDR_CONST(0x9018))
#define CACC_D_DATAOUT_ADDR_0_SECURE                                       (0x0)
#define CACC_D_DATAOUT_ADDR_0_DUAL                                         (0x0)
#define CACC_D_DATAOUT_ADDR_0_SCR                                            (0)
#define CACC_D_DATAOUT_ADDR_0_WORD_COUNT                                   (0x1)
#define CACC_D_DATAOUT_ADDR_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_ADDR_0_RESET_MASK            (_MK_MASK_CONST(0xffffffe0))
#define CACC_D_DATAOUT_ADDR_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_ADDR_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_ADDR_0_READ_MASK             (_MK_MASK_CONST(0xffffffe0))
#define CACC_D_DATAOUT_ADDR_0_WRITE_MASK            (_MK_MASK_CONST(0xffffffe0))
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_SHIFT            (_MK_SHIFT_CONST(5))
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_SHIFT))
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_RANGE                          (31:5)
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_WOFFSET                         (0x0)
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_DEFAULT         (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_ADDR_0_DATAOUT_ADDR_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CACC_D_BATCH_NUMBER_0
#define CACC_D_BATCH_NUMBER_0                           (_MK_ADDR_CONST(0x901c))
#define CACC_D_BATCH_NUMBER_0_SECURE                                       (0x0)
#define CACC_D_BATCH_NUMBER_0_DUAL                                         (0x0)
#define CACC_D_BATCH_NUMBER_0_SCR                                            (0)
#define CACC_D_BATCH_NUMBER_0_WORD_COUNT                                   (0x1)
#define CACC_D_BATCH_NUMBER_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CACC_D_BATCH_NUMBER_0_RESET_MASK                  (_MK_MASK_CONST(0x1f))
#define CACC_D_BATCH_NUMBER_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CACC_D_BATCH_NUMBER_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CACC_D_BATCH_NUMBER_0_READ_MASK                   (_MK_MASK_CONST(0x1f))
#define CACC_D_BATCH_NUMBER_0_WRITE_MASK                  (_MK_MASK_CONST(0x1f))
#define CACC_D_BATCH_NUMBER_0_BATCHES_SHIFT                 (_MK_SHIFT_CONST(0))
#define CACC_D_BATCH_NUMBER_0_BATCHES_FIELD \
	(_MK_FIELD_CONST(0x1f, CACC_D_BATCH_NUMBER_0_BATCHES_SHIFT))
#define CACC_D_BATCH_NUMBER_0_BATCHES_RANGE                                (4:0)
#define CACC_D_BATCH_NUMBER_0_BATCHES_WOFFSET                              (0x0)
#define CACC_D_BATCH_NUMBER_0_BATCHES_DEFAULT              (_MK_MASK_CONST(0x0))
#define CACC_D_BATCH_NUMBER_0_BATCHES_DEFAULT_MASK        (_MK_MASK_CONST(0x1f))
#define CACC_D_BATCH_NUMBER_0_BATCHES_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CACC_D_BATCH_NUMBER_0_BATCHES_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CACC_D_BATCH_NUMBER_0_BATCHES_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CACC_D_BATCH_NUMBER_0_BATCHES_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CACC_D_LINE_STRIDE_0
#define CACC_D_LINE_STRIDE_0                            (_MK_ADDR_CONST(0x9020))
#define CACC_D_LINE_STRIDE_0_SECURE                                        (0x0)
#define CACC_D_LINE_STRIDE_0_DUAL                                          (0x0)
#define CACC_D_LINE_STRIDE_0_SCR                                             (0)
#define CACC_D_LINE_STRIDE_0_WORD_COUNT                                    (0x1)
#define CACC_D_LINE_STRIDE_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CACC_D_LINE_STRIDE_0_RESET_MASK               (_MK_MASK_CONST(0xffffe0))
#define CACC_D_LINE_STRIDE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CACC_D_LINE_STRIDE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CACC_D_LINE_STRIDE_0_READ_MASK                (_MK_MASK_CONST(0xffffe0))
#define CACC_D_LINE_STRIDE_0_WRITE_MASK               (_MK_MASK_CONST(0xffffe0))
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_SHIFT              (_MK_SHIFT_CONST(5))
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffff, CACC_D_LINE_STRIDE_0_LINE_STRIDE_SHIFT))
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_RANGE                            (23:5)
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_WOFFSET                           (0x0)
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_DEFAULT           (_MK_MASK_CONST(0x0))
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_LINE_STRIDE_0_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CACC_D_SURF_STRIDE_0
#define CACC_D_SURF_STRIDE_0                            (_MK_ADDR_CONST(0x9024))
#define CACC_D_SURF_STRIDE_0_SECURE                                        (0x0)
#define CACC_D_SURF_STRIDE_0_DUAL                                          (0x0)
#define CACC_D_SURF_STRIDE_0_SCR                                             (0)
#define CACC_D_SURF_STRIDE_0_WORD_COUNT                                    (0x1)
#define CACC_D_SURF_STRIDE_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CACC_D_SURF_STRIDE_0_RESET_MASK               (_MK_MASK_CONST(0xffffe0))
#define CACC_D_SURF_STRIDE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CACC_D_SURF_STRIDE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CACC_D_SURF_STRIDE_0_READ_MASK                (_MK_MASK_CONST(0xffffe0))
#define CACC_D_SURF_STRIDE_0_WRITE_MASK               (_MK_MASK_CONST(0xffffe0))
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_SHIFT              (_MK_SHIFT_CONST(5))
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffff, CACC_D_SURF_STRIDE_0_SURF_STRIDE_SHIFT))
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_RANGE                            (23:5)
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_WOFFSET                           (0x0)
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_DEFAULT           (_MK_MASK_CONST(0x0))
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_SURF_STRIDE_0_SURF_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CACC_D_DATAOUT_MAP_0
#define CACC_D_DATAOUT_MAP_0                            (_MK_ADDR_CONST(0x9028))
#define CACC_D_DATAOUT_MAP_0_SECURE                                        (0x0)
#define CACC_D_DATAOUT_MAP_0_DUAL                                          (0x0)
#define CACC_D_DATAOUT_MAP_0_SCR                                             (0)
#define CACC_D_DATAOUT_MAP_0_WORD_COUNT                                    (0x1)
#define CACC_D_DATAOUT_MAP_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_RESET_MASK                (_MK_MASK_CONST(0x10001))
#define CACC_D_DATAOUT_MAP_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_READ_MASK                 (_MK_MASK_CONST(0x10001))
#define CACC_D_DATAOUT_MAP_0_WRITE_MASK                (_MK_MASK_CONST(0x10001))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_SHIFT              (_MK_SHIFT_CONST(0))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_FIELD \
	(_MK_FIELD_CONST(0x1, CACC_D_DATAOUT_MAP_0_LINE_PACKED_SHIFT))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_RANGE                             (0:0)
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_WOFFSET                           (0x0)
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_DEFAULT           (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_INIT_ENUM                       (FALSE)
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_FALSE               (_MK_ENUM_CONST(0))
#define CACC_D_DATAOUT_MAP_0_LINE_PACKED_TRUE                (_MK_ENUM_CONST(1))

#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_SHIFT             (_MK_SHIFT_CONST(16))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_FIELD \
	(_MK_FIELD_CONST(0x1, CACC_D_DATAOUT_MAP_0_SURF_PACKED_SHIFT))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_RANGE                           (16:16)
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_WOFFSET                           (0x0)
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_DEFAULT           (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_INIT_ENUM                       (FALSE)
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_FALSE               (_MK_ENUM_CONST(0))
#define CACC_D_DATAOUT_MAP_0_SURF_PACKED_TRUE                (_MK_ENUM_CONST(1))


// Register CACC_D_CLIP_CFG_0
#define CACC_D_CLIP_CFG_0                               (_MK_ADDR_CONST(0x902c))
#define CACC_D_CLIP_CFG_0_SECURE                                           (0x0)
#define CACC_D_CLIP_CFG_0_DUAL                                             (0x0)
#define CACC_D_CLIP_CFG_0_SCR                                                (0)
#define CACC_D_CLIP_CFG_0_WORD_COUNT                                       (0x1)
#define CACC_D_CLIP_CFG_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define CACC_D_CLIP_CFG_0_RESET_MASK                      (_MK_MASK_CONST(0x1f))
#define CACC_D_CLIP_CFG_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CACC_D_CLIP_CFG_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CACC_D_CLIP_CFG_0_READ_MASK                       (_MK_MASK_CONST(0x1f))
#define CACC_D_CLIP_CFG_0_WRITE_MASK                      (_MK_MASK_CONST(0x1f))
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_SHIFT               (_MK_SHIFT_CONST(0))
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_FIELD \
	(_MK_FIELD_CONST(0x1f, CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_SHIFT))
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_RANGE                              (4:0)
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_WOFFSET                            (0x0)
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_DEFAULT            (_MK_MASK_CONST(0x0))
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_DEFAULT_MASK      (_MK_MASK_CONST(0x1f))
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_CLIP_CFG_0_CLIP_TRUNCATE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CACC_D_OUT_SATURATION_0
#define CACC_D_OUT_SATURATION_0                         (_MK_ADDR_CONST(0x9030))
#define CACC_D_OUT_SATURATION_0_SECURE                                     (0x0)
#define CACC_D_OUT_SATURATION_0_DUAL                                       (0x0)
#define CACC_D_OUT_SATURATION_0_SCR                                          (0)
#define CACC_D_OUT_SATURATION_0_WORD_COUNT                                 (0x1)
#define CACC_D_OUT_SATURATION_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CACC_D_OUT_SATURATION_0_RESET_MASK          (_MK_MASK_CONST(0xffffffff))
#define CACC_D_OUT_SATURATION_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CACC_D_OUT_SATURATION_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CACC_D_OUT_SATURATION_0_READ_MASK           (_MK_MASK_CONST(0xffffffff))
#define CACC_D_OUT_SATURATION_0_WRITE_MASK                 (_MK_MASK_CONST(0x0))
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_SHIFT             (_MK_SHIFT_CONST(0))
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CACC_D_OUT_SATURATION_0_SAT_COUNT_SHIFT))
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_RANGE                           (31:0)
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_WOFFSET                          (0x0)
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_DEFAULT          (_MK_MASK_CONST(0x0))
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CACC_D_OUT_SATURATION_0_SAT_COUNT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CACC_D_CYA_0
#define CACC_D_CYA_0                                    (_MK_ADDR_CONST(0x9034))
#define CACC_D_CYA_0_SECURE                                                (0x0)
#define CACC_D_CYA_0_DUAL                                                  (0x0)
#define CACC_D_CYA_0_SCR                                                     (0)
#define CACC_D_CYA_0_WORD_COUNT                                            (0x1)
#define CACC_D_CYA_0_RESET_VAL                             (_MK_MASK_CONST(0x0))
#define CACC_D_CYA_0_RESET_MASK                     (_MK_MASK_CONST(0xffffffff))
#define CACC_D_CYA_0_SW_DEFAULT_VAL                        (_MK_MASK_CONST(0x0))
#define CACC_D_CYA_0_SW_DEFAULT_MASK                       (_MK_MASK_CONST(0x0))
#define CACC_D_CYA_0_READ_MASK                      (_MK_MASK_CONST(0xffffffff))
#define CACC_D_CYA_0_WRITE_MASK                     (_MK_MASK_CONST(0xffffffff))
#define CACC_D_CYA_0_CYA_SHIFT                              (_MK_SHIFT_CONST(0))
#define CACC_D_CYA_0_CYA_FIELD \
	(_MK_FIELD_CONST(0xffffffff, CACC_D_CYA_0_CYA_SHIFT))
#define CACC_D_CYA_0_CYA_RANGE                                            (31:0)
#define CACC_D_CYA_0_CYA_WOFFSET                                           (0x0)
#define CACC_D_CYA_0_CYA_DEFAULT                           (_MK_MASK_CONST(0x0))
#define CACC_D_CYA_0_CYA_DEFAULT_MASK               (_MK_MASK_CONST(0xffffffff))
#define CACC_D_CYA_0_CYA_SW_DEFAULT                        (_MK_MASK_CONST(0x0))
#define CACC_D_CYA_0_CYA_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CACC_D_CYA_0_CYA_PARITY_PROTECTION                 (_MK_MASK_CONST(0x0))
#define CACC_D_CYA_0_CYA_PLATFORM_DEPENDENT                (_MK_MASK_CONST(0x1))


// Register SDP_RDMA_S_STATUS_0
#define SDP_RDMA_S_STATUS_0                             (_MK_ADDR_CONST(0xa000))
#define SDP_RDMA_S_STATUS_0_SECURE                                         (0x0)
#define SDP_RDMA_S_STATUS_0_DUAL                                           (0x0)
#define SDP_RDMA_S_STATUS_0_SCR                                              (0)
#define SDP_RDMA_S_STATUS_0_WORD_COUNT                                     (0x1)
#define SDP_RDMA_S_STATUS_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_RESET_MASK                 (_MK_MASK_CONST(0x30003))
#define SDP_RDMA_S_STATUS_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_READ_MASK                  (_MK_MASK_CONST(0x30003))
#define SDP_RDMA_S_STATUS_0_WRITE_MASK                     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_0_SHIFT                  (_MK_SHIFT_CONST(0))
#define SDP_RDMA_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_RDMA_S_STATUS_0_STATUS_0_SHIFT))
#define SDP_RDMA_S_STATUS_0_STATUS_0_RANGE                                 (1:0)
#define SDP_RDMA_S_STATUS_0_STATUS_0_WOFFSET                               (0x0)
#define SDP_RDMA_S_STATUS_0_STATUS_0_DEFAULT               (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_0_DEFAULT_MASK          (_MK_MASK_CONST(0x3))
#define SDP_RDMA_S_STATUS_0_STATUS_0_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_0_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define SDP_RDMA_S_STATUS_0_STATUS_0_INIT_ENUM                            (IDLE)
#define SDP_RDMA_S_STATUS_0_STATUS_0_IDLE                    (_MK_ENUM_CONST(0))
#define SDP_RDMA_S_STATUS_0_STATUS_0_RUNNING                 (_MK_ENUM_CONST(1))
#define SDP_RDMA_S_STATUS_0_STATUS_0_PENDING                 (_MK_ENUM_CONST(2))

#define SDP_RDMA_S_STATUS_0_STATUS_1_SHIFT                 (_MK_SHIFT_CONST(16))
#define SDP_RDMA_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_RDMA_S_STATUS_0_STATUS_1_SHIFT))
#define SDP_RDMA_S_STATUS_0_STATUS_1_RANGE                               (17:16)
#define SDP_RDMA_S_STATUS_0_STATUS_1_WOFFSET                               (0x0)
#define SDP_RDMA_S_STATUS_0_STATUS_1_DEFAULT               (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_1_DEFAULT_MASK          (_MK_MASK_CONST(0x3))
#define SDP_RDMA_S_STATUS_0_STATUS_1_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_1_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define SDP_RDMA_S_STATUS_0_STATUS_1_INIT_ENUM                            (IDLE)
#define SDP_RDMA_S_STATUS_0_STATUS_1_IDLE                    (_MK_ENUM_CONST(0))
#define SDP_RDMA_S_STATUS_0_STATUS_1_RUNNING                 (_MK_ENUM_CONST(1))
#define SDP_RDMA_S_STATUS_0_STATUS_1_PENDING                 (_MK_ENUM_CONST(2))


// Register SDP_RDMA_S_POINTER_0
#define SDP_RDMA_S_POINTER_0                            (_MK_ADDR_CONST(0xa004))
#define SDP_RDMA_S_POINTER_0_SECURE                                        (0x0)
#define SDP_RDMA_S_POINTER_0_DUAL                                          (0x0)
#define SDP_RDMA_S_POINTER_0_SCR                                             (0)
#define SDP_RDMA_S_POINTER_0_WORD_COUNT                                    (0x1)
#define SDP_RDMA_S_POINTER_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_RESET_MASK                (_MK_MASK_CONST(0x10001))
#define SDP_RDMA_S_POINTER_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_READ_MASK                 (_MK_MASK_CONST(0x10001))
#define SDP_RDMA_S_POINTER_0_WRITE_MASK                    (_MK_MASK_CONST(0x1))
#define SDP_RDMA_S_POINTER_0_PRODUCER_SHIFT                 (_MK_SHIFT_CONST(0))
#define SDP_RDMA_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_S_POINTER_0_PRODUCER_SHIFT))
#define SDP_RDMA_S_POINTER_0_PRODUCER_RANGE                                (0:0)
#define SDP_RDMA_S_POINTER_0_PRODUCER_WOFFSET                              (0x0)
#define SDP_RDMA_S_POINTER_0_PRODUCER_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_PRODUCER_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define SDP_RDMA_S_POINTER_0_PRODUCER_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_PRODUCER_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_S_POINTER_0_PRODUCER_INIT_ENUM                        (GROUP_0)
#define SDP_RDMA_S_POINTER_0_PRODUCER_GROUP_0                (_MK_ENUM_CONST(0))
#define SDP_RDMA_S_POINTER_0_PRODUCER_GROUP_1                (_MK_ENUM_CONST(1))

#define SDP_RDMA_S_POINTER_0_CONSUMER_SHIFT                (_MK_SHIFT_CONST(16))
#define SDP_RDMA_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_S_POINTER_0_CONSUMER_SHIFT))
#define SDP_RDMA_S_POINTER_0_CONSUMER_RANGE                              (16:16)
#define SDP_RDMA_S_POINTER_0_CONSUMER_WOFFSET                              (0x0)
#define SDP_RDMA_S_POINTER_0_CONSUMER_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_CONSUMER_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define SDP_RDMA_S_POINTER_0_CONSUMER_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_CONSUMER_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_S_POINTER_0_CONSUMER_INIT_ENUM                        (GROUP_0)
#define SDP_RDMA_S_POINTER_0_CONSUMER_GROUP_0                (_MK_ENUM_CONST(0))
#define SDP_RDMA_S_POINTER_0_CONSUMER_GROUP_1                (_MK_ENUM_CONST(1))


// Register SDP_RDMA_D_OP_ENABLE_0
#define SDP_RDMA_D_OP_ENABLE_0                          (_MK_ADDR_CONST(0xa008))
#define SDP_RDMA_D_OP_ENABLE_0_SECURE                                      (0x0)
#define SDP_RDMA_D_OP_ENABLE_0_DUAL                                        (0x0)
#define SDP_RDMA_D_OP_ENABLE_0_SCR                                           (0)
#define SDP_RDMA_D_OP_ENABLE_0_WORD_COUNT                                  (0x1)
#define SDP_RDMA_D_OP_ENABLE_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_OP_ENABLE_0_RESET_MASK                  (_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_OP_ENABLE_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_OP_ENABLE_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_OP_ENABLE_0_READ_MASK                   (_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_OP_ENABLE_0_WRITE_MASK                  (_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_SHIFT                  (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_OP_ENABLE_0_OP_EN_SHIFT))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_RANGE                                 (0:0)
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_WOFFSET                               (0x0)
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_DEFAULT               (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK          (_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_INIT_ENUM                         (DISABLE)
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_DISABLE                 (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_OP_ENABLE_0_OP_EN_ENABLE                  (_MK_ENUM_CONST(1))


// Register SDP_RDMA_D_DATA_CUBE_WIDTH_0
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0                    (_MK_ADDR_CONST(0xa00c))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_SECURE                                (0x0)
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_DUAL                                  (0x0)
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_SCR                                     (0)
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WORD_COUNT                            (0x1)
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_RESET_MASK         (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_READ_MASK          (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WRITE_MASK         (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_SHIFT            (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_SHIFT))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_RANGE                          (12:0)
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_WOFFSET                         (0x0)
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_DATA_CUBE_HEIGHT_0
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0                   (_MK_ADDR_CONST(0xa010))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_SECURE                               (0x0)
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_DUAL                                 (0x0)
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_SCR                                    (0)
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_WORD_COUNT                           (0x1)
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_RESET_MASK        (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_READ_MASK         (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_WRITE_MASK        (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_SHIFT          (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_SHIFT))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_RANGE                        (12:0)
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_WOFFSET                       (0x0)
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_DATA_CUBE_CHANNEL_0
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0                  (_MK_ADDR_CONST(0xa014))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_SECURE                              (0x0)
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_DUAL                                (0x0)
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_SCR                                   (0)
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_WORD_COUNT                          (0x1)
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_RESET_MASK       (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_READ_MASK        (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_WRITE_MASK       (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_SHIFT        (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_SHIFT))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_RANGE                      (12:0)
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_WOFFSET                     (0x0)
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_SRC_BASE_ADDR_LOW_0
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0                  (_MK_ADDR_CONST(0xa018))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SECURE                              (0x0)
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_DUAL                                (0x0)
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SCR                                   (0)
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_WORD_COUNT                          (0x1)
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_READ_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SHIFT))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_RANGE            (31:5)
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_WOFFSET           (0x0)
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0                 (_MK_ADDR_CONST(0xa01c))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SECURE                             (0x0)
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_DUAL                               (0x0)
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SCR                                  (0)
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_WORD_COUNT                         (0x1)
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SHIFT))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_RANGE          (31:0)
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_WOFFSET         (0x0)
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_SRC_LINE_STRIDE_0
#define SDP_RDMA_D_SRC_LINE_STRIDE_0                    (_MK_ADDR_CONST(0xa020))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SECURE                                (0x0)
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_DUAL                                  (0x0)
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SCR                                     (0)
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_WORD_COUNT                            (0x1)
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_RESET_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_READ_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_WRITE_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SHIFT))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_RANGE                (31:5)
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_WOFFSET               (0x0)
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_SRC_SURFACE_STRIDE_0
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0                 (_MK_ADDR_CONST(0xa024))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SECURE                             (0x0)
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_DUAL                               (0x0)
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SCR                                  (0)
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_WORD_COUNT                         (0x1)
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SHIFT))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_RANGE          (31:5)
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_WOFFSET         (0x0)
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BRDMA_CFG_0
#define SDP_RDMA_D_BRDMA_CFG_0                          (_MK_ADDR_CONST(0xa028))
#define SDP_RDMA_D_BRDMA_CFG_0_SECURE                                      (0x0)
#define SDP_RDMA_D_BRDMA_CFG_0_DUAL                                        (0x0)
#define SDP_RDMA_D_BRDMA_CFG_0_SCR                                           (0)
#define SDP_RDMA_D_BRDMA_CFG_0_WORD_COUNT                                  (0x1)
#define SDP_RDMA_D_BRDMA_CFG_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_RESET_MASK                 (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_BRDMA_CFG_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_READ_MASK                  (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_BRDMA_CFG_0_WRITE_MASK                 (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_SHIFT          (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_SHIFT))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_RANGE                         (0:0)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_WOFFSET                       (0x0)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_NO              (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DISABLE_YES             (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_SHIFT         (_MK_SHIFT_CONST(1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_SHIFT))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_RANGE                        (2:1)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_WOFFSET                      (0x0)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_MUL            (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_ALU            (_MK_ENUM_CONST(1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_USE_BOTH           (_MK_ENUM_CONST(2))

#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_SHIFT        (_MK_SHIFT_CONST(3))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_SHIFT))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_RANGE                       (3:3)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_WOFFSET                     (0x0)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_ONE_BYTE      (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_SIZE_TWO_BYTE      (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_SHIFT        (_MK_SHIFT_CONST(4))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_SHIFT))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_RANGE                       (4:4)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_WOFFSET                     (0x0)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_PER_KERNEL    (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_DATA_MODE_PER_ELEMENT \
	(_MK_ENUM_CONST(1))

#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_SHIFT         (_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_SHIFT))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_RANGE                        (5:5)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_WOFFSET                      (0x0)
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_CV             (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_BRDMA_CFG_0_BRDMA_RAM_TYPE_MC             (_MK_ENUM_CONST(1))


// Register SDP_RDMA_D_BS_BASE_ADDR_LOW_0
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0                   (_MK_ADDR_CONST(0xa02c))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_SECURE                               (0x0)
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_DUAL                                 (0x0)
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_SCR                                    (0)
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_WORD_COUNT                           (0x1)
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_RESET_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_READ_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_WRITE_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_SHIFT))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_RANGE              (31:5)
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_WOFFSET             (0x0)
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_LOW_0_BS_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BS_BASE_ADDR_HIGH_0
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0                  (_MK_ADDR_CONST(0xa030))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_SECURE                              (0x0)
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_DUAL                                (0x0)
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_SCR                                   (0)
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_WORD_COUNT                          (0x1)
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_READ_MASK    (_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_SHIFT))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_RANGE            (31:0)
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_WOFFSET           (0x0)
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BASE_ADDR_HIGH_0_BS_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BS_LINE_STRIDE_0
#define SDP_RDMA_D_BS_LINE_STRIDE_0                     (_MK_ADDR_CONST(0xa034))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_SECURE                                 (0x0)
#define SDP_RDMA_D_BS_LINE_STRIDE_0_DUAL                                   (0x0)
#define SDP_RDMA_D_BS_LINE_STRIDE_0_SCR                                      (0)
#define SDP_RDMA_D_BS_LINE_STRIDE_0_WORD_COUNT                             (0x1)
#define SDP_RDMA_D_BS_LINE_STRIDE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_RESET_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_READ_MASK       (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_WRITE_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_SHIFT    (_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_SHIFT))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_RANGE                  (31:5)
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_WOFFSET                 (0x0)
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_LINE_STRIDE_0_BS_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BS_SURFACE_STRIDE_0
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0                  (_MK_ADDR_CONST(0xa038))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_SECURE                              (0x0)
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_DUAL                                (0x0)
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_SCR                                   (0)
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_WORD_COUNT                          (0x1)
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_READ_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_SHIFT))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_RANGE            (31:5)
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_WOFFSET           (0x0)
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_SURFACE_STRIDE_0_BS_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BS_BATCH_STRIDE_0
#define SDP_RDMA_D_BS_BATCH_STRIDE_0                    (_MK_ADDR_CONST(0xa03c))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_SECURE                                (0x0)
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_DUAL                                  (0x0)
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_SCR                                     (0)
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_WORD_COUNT                            (0x1)
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_RESET_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_READ_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_WRITE_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_SHIFT))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_RANGE                (31:5)
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_WOFFSET               (0x0)
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BS_BATCH_STRIDE_0_BS_BATCH_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_NRDMA_CFG_0
#define SDP_RDMA_D_NRDMA_CFG_0                          (_MK_ADDR_CONST(0xa040))
#define SDP_RDMA_D_NRDMA_CFG_0_SECURE                                      (0x0)
#define SDP_RDMA_D_NRDMA_CFG_0_DUAL                                        (0x0)
#define SDP_RDMA_D_NRDMA_CFG_0_SCR                                           (0)
#define SDP_RDMA_D_NRDMA_CFG_0_WORD_COUNT                                  (0x1)
#define SDP_RDMA_D_NRDMA_CFG_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_RESET_MASK                 (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_NRDMA_CFG_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_READ_MASK                  (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_NRDMA_CFG_0_WRITE_MASK                 (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_SHIFT          (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_SHIFT))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_RANGE                         (0:0)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_WOFFSET                       (0x0)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_NO              (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DISABLE_YES             (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_SHIFT         (_MK_SHIFT_CONST(1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_SHIFT))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_RANGE                        (2:1)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_WOFFSET                      (0x0)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_MUL            (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_ALU            (_MK_ENUM_CONST(1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_USE_BOTH           (_MK_ENUM_CONST(2))

#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_SHIFT        (_MK_SHIFT_CONST(3))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_SHIFT))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_RANGE                       (3:3)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_WOFFSET                     (0x0)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_ONE_BYTE      (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_SIZE_TWO_BYTE      (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_SHIFT        (_MK_SHIFT_CONST(4))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_SHIFT))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_RANGE                       (4:4)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_WOFFSET                     (0x0)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_PER_KERNEL    (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_DATA_MODE_PER_ELEMENT \
	(_MK_ENUM_CONST(1))

#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_SHIFT         (_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_SHIFT))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_RANGE                        (5:5)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_WOFFSET                      (0x0)
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_CV             (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_NRDMA_CFG_0_NRDMA_RAM_TYPE_MC             (_MK_ENUM_CONST(1))


// Register SDP_RDMA_D_BN_BASE_ADDR_LOW_0
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0                   (_MK_ADDR_CONST(0xa044))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_SECURE                               (0x0)
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_DUAL                                 (0x0)
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_SCR                                    (0)
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_WORD_COUNT                           (0x1)
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_RESET_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_READ_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_WRITE_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_SHIFT))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_RANGE              (31:5)
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_WOFFSET             (0x0)
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_LOW_0_BN_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BN_BASE_ADDR_HIGH_0
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0                  (_MK_ADDR_CONST(0xa048))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_SECURE                              (0x0)
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_DUAL                                (0x0)
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_SCR                                   (0)
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_WORD_COUNT                          (0x1)
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_READ_MASK    (_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_SHIFT))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_RANGE            (31:0)
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_WOFFSET           (0x0)
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BASE_ADDR_HIGH_0_BN_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BN_LINE_STRIDE_0
#define SDP_RDMA_D_BN_LINE_STRIDE_0                     (_MK_ADDR_CONST(0xa04c))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_SECURE                                 (0x0)
#define SDP_RDMA_D_BN_LINE_STRIDE_0_DUAL                                   (0x0)
#define SDP_RDMA_D_BN_LINE_STRIDE_0_SCR                                      (0)
#define SDP_RDMA_D_BN_LINE_STRIDE_0_WORD_COUNT                             (0x1)
#define SDP_RDMA_D_BN_LINE_STRIDE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_RESET_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_READ_MASK       (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_WRITE_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_SHIFT    (_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_SHIFT))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_RANGE                  (31:5)
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_WOFFSET                 (0x0)
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_LINE_STRIDE_0_BN_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BN_SURFACE_STRIDE_0
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0                  (_MK_ADDR_CONST(0xa050))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_SECURE                              (0x0)
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_DUAL                                (0x0)
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_SCR                                   (0)
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_WORD_COUNT                          (0x1)
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_READ_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_SHIFT))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_RANGE            (31:5)
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_WOFFSET           (0x0)
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_SURFACE_STRIDE_0_BN_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_BN_BATCH_STRIDE_0
#define SDP_RDMA_D_BN_BATCH_STRIDE_0                    (_MK_ADDR_CONST(0xa054))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_SECURE                                (0x0)
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_DUAL                                  (0x0)
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_SCR                                     (0)
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_WORD_COUNT                            (0x1)
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_RESET_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_READ_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_WRITE_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_SHIFT))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_RANGE                (31:5)
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_WOFFSET               (0x0)
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_BN_BATCH_STRIDE_0_BN_BATCH_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_ERDMA_CFG_0
#define SDP_RDMA_D_ERDMA_CFG_0                          (_MK_ADDR_CONST(0xa058))
#define SDP_RDMA_D_ERDMA_CFG_0_SECURE                                      (0x0)
#define SDP_RDMA_D_ERDMA_CFG_0_DUAL                                        (0x0)
#define SDP_RDMA_D_ERDMA_CFG_0_SCR                                           (0)
#define SDP_RDMA_D_ERDMA_CFG_0_WORD_COUNT                                  (0x1)
#define SDP_RDMA_D_ERDMA_CFG_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_RESET_MASK                 (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_ERDMA_CFG_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_READ_MASK                  (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_ERDMA_CFG_0_WRITE_MASK                 (_MK_MASK_CONST(0x3f))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_SHIFT          (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_SHIFT))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_RANGE                         (0:0)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_WOFFSET                       (0x0)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_NO              (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DISABLE_YES             (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_SHIFT         (_MK_SHIFT_CONST(1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_SHIFT))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_RANGE                        (2:1)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_WOFFSET                      (0x0)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_MUL            (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_ALU            (_MK_ENUM_CONST(1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_USE_BOTH           (_MK_ENUM_CONST(2))

#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_SHIFT        (_MK_SHIFT_CONST(3))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_SHIFT))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_RANGE                       (3:3)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_WOFFSET                     (0x0)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_ONE_BYTE      (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_SIZE_TWO_BYTE      (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_SHIFT        (_MK_SHIFT_CONST(4))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_SHIFT))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_RANGE                       (4:4)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_WOFFSET                     (0x0)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_PER_KERNEL    (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_DATA_MODE_PER_ELEMENT \
	(_MK_ENUM_CONST(1))

#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_SHIFT         (_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_SHIFT))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_RANGE                        (5:5)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_WOFFSET                      (0x0)
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_CV             (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_ERDMA_CFG_0_ERDMA_RAM_TYPE_MC             (_MK_ENUM_CONST(1))


// Register SDP_RDMA_D_EW_BASE_ADDR_LOW_0
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0                   (_MK_ADDR_CONST(0xa05c))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_SECURE                               (0x0)
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_DUAL                                 (0x0)
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_SCR                                    (0)
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_WORD_COUNT                           (0x1)
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_RESET_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_READ_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_WRITE_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_SHIFT))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_RANGE              (31:5)
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_WOFFSET             (0x0)
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_LOW_0_EW_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_EW_BASE_ADDR_HIGH_0
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0                  (_MK_ADDR_CONST(0xa060))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_SECURE                              (0x0)
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_DUAL                                (0x0)
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_SCR                                   (0)
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_WORD_COUNT                          (0x1)
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_READ_MASK    (_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_SHIFT))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_RANGE            (31:0)
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_WOFFSET           (0x0)
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BASE_ADDR_HIGH_0_EW_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_EW_LINE_STRIDE_0
#define SDP_RDMA_D_EW_LINE_STRIDE_0                     (_MK_ADDR_CONST(0xa064))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_SECURE                                 (0x0)
#define SDP_RDMA_D_EW_LINE_STRIDE_0_DUAL                                   (0x0)
#define SDP_RDMA_D_EW_LINE_STRIDE_0_SCR                                      (0)
#define SDP_RDMA_D_EW_LINE_STRIDE_0_WORD_COUNT                             (0x1)
#define SDP_RDMA_D_EW_LINE_STRIDE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_RESET_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_READ_MASK       (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_WRITE_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_SHIFT    (_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_SHIFT))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_RANGE                  (31:5)
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_WOFFSET                 (0x0)
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_LINE_STRIDE_0_EW_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_EW_SURFACE_STRIDE_0
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0                  (_MK_ADDR_CONST(0xa068))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_SECURE                              (0x0)
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_DUAL                                (0x0)
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_SCR                                   (0)
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_WORD_COUNT                          (0x1)
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_READ_MASK    (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_SHIFT))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_RANGE            (31:5)
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_WOFFSET           (0x0)
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_SURFACE_STRIDE_0_EW_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_EW_BATCH_STRIDE_0
#define SDP_RDMA_D_EW_BATCH_STRIDE_0                    (_MK_ADDR_CONST(0xa06c))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_SECURE                                (0x0)
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_DUAL                                  (0x0)
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_SCR                                     (0)
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_WORD_COUNT                            (0x1)
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_RESET_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_READ_MASK      (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_WRITE_MASK     (_MK_MASK_CONST(0xffffffe0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_SHIFT))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_RANGE                (31:5)
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_WOFFSET               (0x0)
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_EW_BATCH_STRIDE_0_EW_BATCH_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_FEATURE_MODE_CFG_0
#define SDP_RDMA_D_FEATURE_MODE_CFG_0                   (_MK_ADDR_CONST(0xa070))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_SECURE                               (0x0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_DUAL                                 (0x0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_SCR                                    (0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WORD_COUNT                           (0x1)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_RESET_VAL           (_MK_MASK_CONST(0x14))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_RESET_MASK        (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_READ_MASK         (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WRITE_MASK        (_MK_MASK_CONST(0x1fff))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_SHIFT     (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, \
	SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_SHIFT))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_RANGE                    (0:0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_WOFFSET                  (0x0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_OFF        (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_FLYING_MODE_ON         (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_SHIFT        (_MK_SHIFT_CONST(1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_SHIFT))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_RANGE                       (1:1)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_WOFFSET                     (0x0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_OFF           (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_WINOGRAD_ON            (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_SHIFT    (_MK_SHIFT_CONST(2))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, \
	SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_SHIFT))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_RANGE                   (3:2)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_WOFFSET                 (0x0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_DEFAULT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_INT8      (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_INT16     (_MK_ENUM_CONST(1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_IN_PRECISION_FP16      (_MK_ENUM_CONST(2))

#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_SHIFT \
	(_MK_SHIFT_CONST(4))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, \
	SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_SHIFT))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_RANGE                 (5:4)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_WOFFSET               (0x0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_DEFAULT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_INT8    (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_INT16 \
	(_MK_ENUM_CONST(1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_PROC_PRECISION_FP16    (_MK_ENUM_CONST(2))

#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_SHIFT \
	(_MK_SHIFT_CONST(6))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, \
	SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_SHIFT))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_RANGE                  (7:6)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_WOFFSET                (0x0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_INT8     (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_INT16    (_MK_ENUM_CONST(1))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_OUT_PRECISION_FP16     (_MK_ENUM_CONST(2))

#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_SHIFT    (_MK_SHIFT_CONST(8))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_SHIFT))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_RANGE                  (12:8)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_WOFFSET                 (0x0)
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_SRC_DMA_CFG_0
#define SDP_RDMA_D_SRC_DMA_CFG_0                        (_MK_ADDR_CONST(0xa074))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SECURE                                    (0x0)
#define SDP_RDMA_D_SRC_DMA_CFG_0_DUAL                                      (0x0)
#define SDP_RDMA_D_SRC_DMA_CFG_0_SCR                                         (0)
#define SDP_RDMA_D_SRC_DMA_CFG_0_WORD_COUNT                                (0x1)
#define SDP_RDMA_D_SRC_DMA_CFG_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_RESET_MASK                (_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_READ_MASK                 (_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_SRC_DMA_CFG_0_WRITE_MASK                (_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_SHIFT         (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_SHIFT))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_RANGE                        (0:0)
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_WOFFSET                      (0x0)
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_CV             (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_MC             (_MK_ENUM_CONST(1))


// Register SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0               (_MK_ADDR_CONST(0xa078))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_SECURE                           (0x0)
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_DUAL                             (0x0)
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_SCR                                (0)
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_WORD_COUNT                       (0x1)
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_RESET_VAL        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_WRITE_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_SHIFT))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_RANGE      (31:0)
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_WOFFSET     (0x0)
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_STATUS_INF_INPUT_NUM_0
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0               (_MK_ADDR_CONST(0xa07c))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_SECURE                           (0x0)
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_DUAL                             (0x0)
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_SCR                                (0)
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_WORD_COUNT                       (0x1)
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_RESET_VAL        (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_WRITE_MASK       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_SHIFT))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_RANGE      (31:0)
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_WOFFSET     (0x0)
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_PERF_ENABLE_0
#define SDP_RDMA_D_PERF_ENABLE_0                        (_MK_ADDR_CONST(0xa080))
#define SDP_RDMA_D_PERF_ENABLE_0_SECURE                                    (0x0)
#define SDP_RDMA_D_PERF_ENABLE_0_DUAL                                      (0x0)
#define SDP_RDMA_D_PERF_ENABLE_0_SCR                                         (0)
#define SDP_RDMA_D_PERF_ENABLE_0_WORD_COUNT                                (0x1)
#define SDP_RDMA_D_PERF_ENABLE_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_RESET_MASK                (_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_PERF_ENABLE_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_READ_MASK                 (_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_PERF_ENABLE_0_WRITE_MASK                (_MK_MASK_CONST(0x3))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_SHIFT          (_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_SHIFT))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_RANGE                         (0:0)
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_WOFFSET                       (0x0)
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_INIT_ENUM                      (NO)
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_NO              (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_DMA_EN_YES             (_MK_ENUM_CONST(1))

#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_SHIFT \
	(_MK_SHIFT_CONST(1))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_FIELD \
	(_MK_FIELD_CONST(0x1, \
	SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_SHIFT))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_RANGE               (1:1)
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_WOFFSET             (0x0)
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_INIT_ENUM            (NO)
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_NO    (_MK_ENUM_CONST(0))
#define SDP_RDMA_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_YES \
	(_MK_ENUM_CONST(1))


// Register SDP_RDMA_D_PERF_MRDMA_READ_STALL_0
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0              (_MK_ADDR_CONST(0xa084))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_SECURE                          (0x0)
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_DUAL                            (0x0)
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_SCR                               (0)
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_WORD_COUNT                      (0x1)
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_RESET_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_WRITE_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_SHIFT))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_RANGE              (31:0)
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_WOFFSET             (0x0)
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_MRDMA_READ_STALL_0_MRDMA_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_PERF_BRDMA_READ_STALL_0
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0              (_MK_ADDR_CONST(0xa088))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_SECURE                          (0x0)
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_DUAL                            (0x0)
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_SCR                               (0)
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_WORD_COUNT                      (0x1)
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_RESET_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_WRITE_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_SHIFT))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_RANGE              (31:0)
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_WOFFSET             (0x0)
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_BRDMA_READ_STALL_0_BRDMA_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_PERF_NRDMA_READ_STALL_0
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0              (_MK_ADDR_CONST(0xa08c))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_SECURE                          (0x0)
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_DUAL                            (0x0)
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_SCR                               (0)
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_WORD_COUNT                      (0x1)
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_RESET_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_WRITE_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_SHIFT))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_RANGE              (31:0)
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_WOFFSET             (0x0)
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_NRDMA_READ_STALL_0_NRDMA_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_RDMA_D_PERF_ERDMA_READ_STALL_0
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0              (_MK_ADDR_CONST(0xa090))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_SECURE                          (0x0)
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_DUAL                            (0x0)
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_SCR                               (0)
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_WORD_COUNT                      (0x1)
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_RESET_VAL       (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_WRITE_MASK      (_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_SHIFT))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_RANGE              (31:0)
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_WOFFSET             (0x0)
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_RDMA_D_PERF_ERDMA_READ_STALL_0_ERDMA_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_STATUS_0
#define SDP_S_STATUS_0                                  (_MK_ADDR_CONST(0xb000))
#define SDP_S_STATUS_0_SECURE                                              (0x0)
#define SDP_S_STATUS_0_DUAL                                                (0x0)
#define SDP_S_STATUS_0_SCR                                                   (0)
#define SDP_S_STATUS_0_WORD_COUNT                                          (0x1)
#define SDP_S_STATUS_0_RESET_VAL                           (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_RESET_MASK                      (_MK_MASK_CONST(0x30003))
#define SDP_S_STATUS_0_SW_DEFAULT_VAL                      (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_SW_DEFAULT_MASK                     (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_READ_MASK                       (_MK_MASK_CONST(0x30003))
#define SDP_S_STATUS_0_WRITE_MASK                          (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_0_SHIFT                       (_MK_SHIFT_CONST(0))
#define SDP_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_S_STATUS_0_STATUS_0_SHIFT))
#define SDP_S_STATUS_0_STATUS_0_RANGE                                      (1:0)
#define SDP_S_STATUS_0_STATUS_0_WOFFSET                                    (0x0)
#define SDP_S_STATUS_0_STATUS_0_DEFAULT                    (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_0_DEFAULT_MASK               (_MK_MASK_CONST(0x3))
#define SDP_S_STATUS_0_STATUS_0_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_0_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define SDP_S_STATUS_0_STATUS_0_INIT_ENUM                                 (IDLE)
#define SDP_S_STATUS_0_STATUS_0_IDLE                         (_MK_ENUM_CONST(0))
#define SDP_S_STATUS_0_STATUS_0_RUNNING                      (_MK_ENUM_CONST(1))
#define SDP_S_STATUS_0_STATUS_0_PENDING                      (_MK_ENUM_CONST(2))

#define SDP_S_STATUS_0_STATUS_1_SHIFT                      (_MK_SHIFT_CONST(16))
#define SDP_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_S_STATUS_0_STATUS_1_SHIFT))
#define SDP_S_STATUS_0_STATUS_1_RANGE                                    (17:16)
#define SDP_S_STATUS_0_STATUS_1_WOFFSET                                    (0x0)
#define SDP_S_STATUS_0_STATUS_1_DEFAULT                    (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_1_DEFAULT_MASK               (_MK_MASK_CONST(0x3))
#define SDP_S_STATUS_0_STATUS_1_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_1_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define SDP_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define SDP_S_STATUS_0_STATUS_1_INIT_ENUM                                 (IDLE)
#define SDP_S_STATUS_0_STATUS_1_IDLE                         (_MK_ENUM_CONST(0))
#define SDP_S_STATUS_0_STATUS_1_RUNNING                      (_MK_ENUM_CONST(1))
#define SDP_S_STATUS_0_STATUS_1_PENDING                      (_MK_ENUM_CONST(2))


// Register SDP_S_POINTER_0
#define SDP_S_POINTER_0                                 (_MK_ADDR_CONST(0xb004))
#define SDP_S_POINTER_0_SECURE                                             (0x0)
#define SDP_S_POINTER_0_DUAL                                               (0x0)
#define SDP_S_POINTER_0_SCR                                                  (0)
#define SDP_S_POINTER_0_WORD_COUNT                                         (0x1)
#define SDP_S_POINTER_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_RESET_MASK                     (_MK_MASK_CONST(0x10001))
#define SDP_S_POINTER_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_READ_MASK                      (_MK_MASK_CONST(0x10001))
#define SDP_S_POINTER_0_WRITE_MASK                         (_MK_MASK_CONST(0x1))
#define SDP_S_POINTER_0_PRODUCER_SHIFT                      (_MK_SHIFT_CONST(0))
#define SDP_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_S_POINTER_0_PRODUCER_SHIFT))
#define SDP_S_POINTER_0_PRODUCER_RANGE                                     (0:0)
#define SDP_S_POINTER_0_PRODUCER_WOFFSET                                   (0x0)
#define SDP_S_POINTER_0_PRODUCER_DEFAULT                   (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_PRODUCER_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define SDP_S_POINTER_0_PRODUCER_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_PRODUCER_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define SDP_S_POINTER_0_PRODUCER_INIT_ENUM                             (GROUP_0)
#define SDP_S_POINTER_0_PRODUCER_GROUP_0                     (_MK_ENUM_CONST(0))
#define SDP_S_POINTER_0_PRODUCER_GROUP_1                     (_MK_ENUM_CONST(1))

#define SDP_S_POINTER_0_CONSUMER_SHIFT                     (_MK_SHIFT_CONST(16))
#define SDP_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_S_POINTER_0_CONSUMER_SHIFT))
#define SDP_S_POINTER_0_CONSUMER_RANGE                                   (16:16)
#define SDP_S_POINTER_0_CONSUMER_WOFFSET                                   (0x0)
#define SDP_S_POINTER_0_CONSUMER_DEFAULT                   (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_CONSUMER_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define SDP_S_POINTER_0_CONSUMER_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_CONSUMER_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define SDP_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define SDP_S_POINTER_0_CONSUMER_INIT_ENUM                             (GROUP_0)
#define SDP_S_POINTER_0_CONSUMER_GROUP_0                     (_MK_ENUM_CONST(0))
#define SDP_S_POINTER_0_CONSUMER_GROUP_1                     (_MK_ENUM_CONST(1))


// Register SDP_S_LUT_ACCESS_CFG_0
#define SDP_S_LUT_ACCESS_CFG_0                          (_MK_ADDR_CONST(0xb008))
#define SDP_S_LUT_ACCESS_CFG_0_SECURE                                      (0x0)
#define SDP_S_LUT_ACCESS_CFG_0_DUAL                                        (0x0)
#define SDP_S_LUT_ACCESS_CFG_0_SCR                                           (0)
#define SDP_S_LUT_ACCESS_CFG_0_WORD_COUNT                                  (0x1)
#define SDP_S_LUT_ACCESS_CFG_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_RESET_MASK              (_MK_MASK_CONST(0x303ff))
#define SDP_S_LUT_ACCESS_CFG_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_READ_MASK               (_MK_MASK_CONST(0x303ff))
#define SDP_S_LUT_ACCESS_CFG_0_WRITE_MASK              (_MK_MASK_CONST(0x303ff))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SHIFT               (_MK_SHIFT_CONST(0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_FIELD \
	(_MK_FIELD_CONST(0x3ff, SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SHIFT))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_RANGE                              (9:0)
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_WOFFSET                            (0x0)
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_DEFAULT_MASK     (_MK_MASK_CONST(0x3ff))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SHIFT          (_MK_SHIFT_CONST(16))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SHIFT))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_RANGE                        (16:16)
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_WOFFSET                        (0x0)
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_INIT_ENUM                       (LE)
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_LE               (_MK_ENUM_CONST(0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_LO               (_MK_ENUM_CONST(1))

#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SHIFT       (_MK_SHIFT_CONST(17))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SHIFT))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_RANGE                     (17:17)
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_WOFFSET                     (0x0)
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_INIT_ENUM                  (READ)
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_READ          (_MK_ENUM_CONST(0))
#define SDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_WRITE         (_MK_ENUM_CONST(1))


// Register SDP_S_LUT_ACCESS_DATA_0
#define SDP_S_LUT_ACCESS_DATA_0                         (_MK_ADDR_CONST(0xb00c))
#define SDP_S_LUT_ACCESS_DATA_0_SECURE                                     (0x0)
#define SDP_S_LUT_ACCESS_DATA_0_DUAL                                       (0x0)
#define SDP_S_LUT_ACCESS_DATA_0_SCR                                          (0)
#define SDP_S_LUT_ACCESS_DATA_0_WORD_COUNT                                 (0x1)
#define SDP_S_LUT_ACCESS_DATA_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_DATA_0_RESET_MASK              (_MK_MASK_CONST(0xffff))
#define SDP_S_LUT_ACCESS_DATA_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_DATA_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_DATA_0_READ_MASK               (_MK_MASK_CONST(0xffff))
#define SDP_S_LUT_ACCESS_DATA_0_WRITE_MASK              (_MK_MASK_CONST(0xffff))
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_FIELD \
	(_MK_FIELD_CONST(0xffff, SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SHIFT))
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_RANGE                            (15:0)
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_WOFFSET                           (0x0)
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_ACCESS_DATA_0_LUT_DATA_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_CFG_0
#define SDP_S_LUT_CFG_0                                 (_MK_ADDR_CONST(0xb010))
#define SDP_S_LUT_CFG_0_SECURE                                             (0x0)
#define SDP_S_LUT_CFG_0_DUAL                                               (0x0)
#define SDP_S_LUT_CFG_0_SCR                                                  (0)
#define SDP_S_LUT_CFG_0_WORD_COUNT                                         (0x1)
#define SDP_S_LUT_CFG_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_RESET_MASK                        (_MK_MASK_CONST(0x71))
#define SDP_S_LUT_CFG_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_READ_MASK                         (_MK_MASK_CONST(0x71))
#define SDP_S_LUT_CFG_0_WRITE_MASK                        (_MK_MASK_CONST(0x71))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SHIFT               (_MK_SHIFT_CONST(0))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SHIFT))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_RANGE                              (0:0)
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_WOFFSET                            (0x0)
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_INIT_ENUM                     (EXPONENT)
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_EXPONENT             (_MK_ENUM_CONST(0))
#define SDP_S_LUT_CFG_0_LUT_LE_FUNCTION_LINEAR               (_MK_ENUM_CONST(1))

#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SHIFT            (_MK_SHIFT_CONST(4))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SHIFT))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_RANGE                           (4:4)
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_WOFFSET                         (0x0)
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_DEFAULT_MASK    (_MK_MASK_CONST(0x1))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_LE                (_MK_ENUM_CONST(0))
#define SDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_LO                (_MK_ENUM_CONST(1))

#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SHIFT            (_MK_SHIFT_CONST(5))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SHIFT))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_RANGE                           (5:5)
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_WOFFSET                         (0x0)
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_DEFAULT_MASK    (_MK_MASK_CONST(0x1))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_LE                (_MK_ENUM_CONST(0))
#define SDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_LO                (_MK_ENUM_CONST(1))

#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SHIFT           (_MK_SHIFT_CONST(6))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SHIFT))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_RANGE                          (6:6)
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_WOFFSET                        (0x0)
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_LE               (_MK_ENUM_CONST(0))
#define SDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_LO               (_MK_ENUM_CONST(1))


// Register SDP_S_LUT_INFO_0
#define SDP_S_LUT_INFO_0                                (_MK_ADDR_CONST(0xb014))
#define SDP_S_LUT_INFO_0_SECURE                                            (0x0)
#define SDP_S_LUT_INFO_0_DUAL                                              (0x0)
#define SDP_S_LUT_INFO_0_SCR                                                 (0)
#define SDP_S_LUT_INFO_0_WORD_COUNT                                        (0x1)
#define SDP_S_LUT_INFO_0_RESET_VAL                         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_RESET_MASK                   (_MK_MASK_CONST(0xffffff))
#define SDP_S_LUT_INFO_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_READ_MASK                    (_MK_MASK_CONST(0xffffff))
#define SDP_S_LUT_INFO_0_WRITE_MASK                   (_MK_MASK_CONST(0xffffff))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SHIFT          (_MK_SHIFT_CONST(0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_FIELD \
	(_MK_FIELD_CONST(0xff, SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SHIFT))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_RANGE                         (7:0)
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_WOFFSET                       (0x0)
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SHIFT          (_MK_SHIFT_CONST(8))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_FIELD \
	(_MK_FIELD_CONST(0xff, SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SHIFT))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_RANGE                        (15:8)
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_WOFFSET                       (0x0)
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SHIFT         (_MK_SHIFT_CONST(16))
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_FIELD \
	(_MK_FIELD_CONST(0xff, SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SHIFT))
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_RANGE                       (23:16)
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_WOFFSET                       (0x0)
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_LE_START_0
#define SDP_S_LUT_LE_START_0                            (_MK_ADDR_CONST(0xb018))
#define SDP_S_LUT_LE_START_0_SECURE                                        (0x0)
#define SDP_S_LUT_LE_START_0_DUAL                                          (0x0)
#define SDP_S_LUT_LE_START_0_SCR                                             (0)
#define SDP_S_LUT_LE_START_0_WORD_COUNT                                    (0x1)
#define SDP_S_LUT_LE_START_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_START_0_RESET_MASK             (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_START_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_START_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_START_0_READ_MASK              (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_START_0_WRITE_MASK             (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_START_0_LUT_LE_START_SHIFT             (_MK_SHIFT_CONST(0))
#define SDP_S_LUT_LE_START_0_LUT_LE_START_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_S_LUT_LE_START_0_LUT_LE_START_SHIFT))
#define SDP_S_LUT_LE_START_0_LUT_LE_START_RANGE                           (31:0)
#define SDP_S_LUT_LE_START_0_LUT_LE_START_WOFFSET                          (0x0)
#define SDP_S_LUT_LE_START_0_LUT_LE_START_DEFAULT          (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_START_0_LUT_LE_START_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_START_0_LUT_LE_START_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_START_0_LUT_LE_START_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_START_0_LUT_LE_START_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_START_0_LUT_LE_START_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_LE_END_0
#define SDP_S_LUT_LE_END_0                              (_MK_ADDR_CONST(0xb01c))
#define SDP_S_LUT_LE_END_0_SECURE                                          (0x0)
#define SDP_S_LUT_LE_END_0_DUAL                                            (0x0)
#define SDP_S_LUT_LE_END_0_SCR                                               (0)
#define SDP_S_LUT_LE_END_0_WORD_COUNT                                      (0x1)
#define SDP_S_LUT_LE_END_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_END_0_RESET_MASK               (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_END_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_END_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_END_0_READ_MASK                (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_END_0_WRITE_MASK               (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_END_0_LUT_LE_END_SHIFT                 (_MK_SHIFT_CONST(0))
#define SDP_S_LUT_LE_END_0_LUT_LE_END_FIELD \
	(_MK_FIELD_CONST(0xffffffff, SDP_S_LUT_LE_END_0_LUT_LE_END_SHIFT))
#define SDP_S_LUT_LE_END_0_LUT_LE_END_RANGE                               (31:0)
#define SDP_S_LUT_LE_END_0_LUT_LE_END_WOFFSET                              (0x0)
#define SDP_S_LUT_LE_END_0_LUT_LE_END_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_END_0_LUT_LE_END_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_END_0_LUT_LE_END_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_END_0_LUT_LE_END_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_END_0_LUT_LE_END_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_END_0_LUT_LE_END_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_LO_START_0
#define SDP_S_LUT_LO_START_0                            (_MK_ADDR_CONST(0xb020))
#define SDP_S_LUT_LO_START_0_SECURE                                        (0x0)
#define SDP_S_LUT_LO_START_0_DUAL                                          (0x0)
#define SDP_S_LUT_LO_START_0_SCR                                             (0)
#define SDP_S_LUT_LO_START_0_WORD_COUNT                                    (0x1)
#define SDP_S_LUT_LO_START_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_START_0_RESET_MASK             (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_START_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_START_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_START_0_READ_MASK              (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_START_0_WRITE_MASK             (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_START_0_LUT_LO_START_SHIFT             (_MK_SHIFT_CONST(0))
#define SDP_S_LUT_LO_START_0_LUT_LO_START_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_S_LUT_LO_START_0_LUT_LO_START_SHIFT))
#define SDP_S_LUT_LO_START_0_LUT_LO_START_RANGE                           (31:0)
#define SDP_S_LUT_LO_START_0_LUT_LO_START_WOFFSET                          (0x0)
#define SDP_S_LUT_LO_START_0_LUT_LO_START_DEFAULT          (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_START_0_LUT_LO_START_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_START_0_LUT_LO_START_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_START_0_LUT_LO_START_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_START_0_LUT_LO_START_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_START_0_LUT_LO_START_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_LO_END_0
#define SDP_S_LUT_LO_END_0                              (_MK_ADDR_CONST(0xb024))
#define SDP_S_LUT_LO_END_0_SECURE                                          (0x0)
#define SDP_S_LUT_LO_END_0_DUAL                                            (0x0)
#define SDP_S_LUT_LO_END_0_SCR                                               (0)
#define SDP_S_LUT_LO_END_0_WORD_COUNT                                      (0x1)
#define SDP_S_LUT_LO_END_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_END_0_RESET_MASK               (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_END_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_END_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_END_0_READ_MASK                (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_END_0_WRITE_MASK               (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_END_0_LUT_LO_END_SHIFT                 (_MK_SHIFT_CONST(0))
#define SDP_S_LUT_LO_END_0_LUT_LO_END_FIELD \
	(_MK_FIELD_CONST(0xffffffff, SDP_S_LUT_LO_END_0_LUT_LO_END_SHIFT))
#define SDP_S_LUT_LO_END_0_LUT_LO_END_RANGE                               (31:0)
#define SDP_S_LUT_LO_END_0_LUT_LO_END_WOFFSET                              (0x0)
#define SDP_S_LUT_LO_END_0_LUT_LO_END_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_END_0_LUT_LO_END_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_END_0_LUT_LO_END_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_END_0_LUT_LO_END_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_END_0_LUT_LO_END_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_END_0_LUT_LO_END_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_LE_SLOPE_SCALE_0
#define SDP_S_LUT_LE_SLOPE_SCALE_0                      (_MK_ADDR_CONST(0xb028))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_SECURE                                  (0x0)
#define SDP_S_LUT_LE_SLOPE_SCALE_0_DUAL                                    (0x0)
#define SDP_S_LUT_LE_SLOPE_SCALE_0_SCR                                       (0)
#define SDP_S_LUT_LE_SLOPE_SCALE_0_WORD_COUNT                              (0x1)
#define SDP_S_LUT_LE_SLOPE_SCALE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_RESET_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_READ_MASK        (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SHIFT))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_RANGE         (15:0)
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_WOFFSET        (0x0)
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SHIFT \
	(_MK_SHIFT_CONST(16))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SHIFT))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_RANGE        (31:16)
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_WOFFSET        (0x0)
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_LE_SLOPE_SHIFT_0
#define SDP_S_LUT_LE_SLOPE_SHIFT_0                      (_MK_ADDR_CONST(0xb02c))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_SECURE                                  (0x0)
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_DUAL                                    (0x0)
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_SCR                                       (0)
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_WORD_COUNT                              (0x1)
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_RESET_MASK            (_MK_MASK_CONST(0x3ff))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_READ_MASK             (_MK_MASK_CONST(0x3ff))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_WRITE_MASK            (_MK_MASK_CONST(0x3ff))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SHIFT))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_RANGE          (4:0)
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_WOFFSET        (0x0)
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SHIFT))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_RANGE          (9:5)
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_WOFFSET        (0x0)
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_LO_SLOPE_SCALE_0
#define SDP_S_LUT_LO_SLOPE_SCALE_0                      (_MK_ADDR_CONST(0xb030))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_SECURE                                  (0x0)
#define SDP_S_LUT_LO_SLOPE_SCALE_0_DUAL                                    (0x0)
#define SDP_S_LUT_LO_SLOPE_SCALE_0_SCR                                       (0)
#define SDP_S_LUT_LO_SLOPE_SCALE_0_WORD_COUNT                              (0x1)
#define SDP_S_LUT_LO_SLOPE_SCALE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_RESET_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_READ_MASK        (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SHIFT))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_RANGE         (15:0)
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_WOFFSET        (0x0)
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SHIFT \
	(_MK_SHIFT_CONST(16))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SHIFT))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_RANGE        (31:16)
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_WOFFSET        (0x0)
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_S_LUT_LO_SLOPE_SHIFT_0
#define SDP_S_LUT_LO_SLOPE_SHIFT_0                      (_MK_ADDR_CONST(0xb034))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_SECURE                                  (0x0)
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_DUAL                                    (0x0)
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_SCR                                       (0)
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_WORD_COUNT                              (0x1)
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_RESET_MASK            (_MK_MASK_CONST(0x3ff))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_READ_MASK             (_MK_MASK_CONST(0x3ff))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_WRITE_MASK            (_MK_MASK_CONST(0x3ff))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SHIFT))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_RANGE          (4:0)
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_WOFFSET        (0x0)
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SHIFT))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_RANGE          (9:5)
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_WOFFSET        (0x0)
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_OP_ENABLE_0
#define SDP_D_OP_ENABLE_0                               (_MK_ADDR_CONST(0xb038))
#define SDP_D_OP_ENABLE_0_SECURE                                           (0x0)
#define SDP_D_OP_ENABLE_0_DUAL                                             (0x0)
#define SDP_D_OP_ENABLE_0_SCR                                                (0)
#define SDP_D_OP_ENABLE_0_WORD_COUNT                                       (0x1)
#define SDP_D_OP_ENABLE_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define SDP_D_OP_ENABLE_0_RESET_MASK                       (_MK_MASK_CONST(0x1))
#define SDP_D_OP_ENABLE_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_D_OP_ENABLE_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define SDP_D_OP_ENABLE_0_READ_MASK                        (_MK_MASK_CONST(0x1))
#define SDP_D_OP_ENABLE_0_WRITE_MASK                       (_MK_MASK_CONST(0x1))
#define SDP_D_OP_ENABLE_0_OP_EN_SHIFT                       (_MK_SHIFT_CONST(0))
#define SDP_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_OP_ENABLE_0_OP_EN_SHIFT))
#define SDP_D_OP_ENABLE_0_OP_EN_RANGE                                      (0:0)
#define SDP_D_OP_ENABLE_0_OP_EN_WOFFSET                                    (0x0)
#define SDP_D_OP_ENABLE_0_OP_EN_DEFAULT                    (_MK_MASK_CONST(0x0))
#define SDP_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK               (_MK_MASK_CONST(0x1))
#define SDP_D_OP_ENABLE_0_OP_EN_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define SDP_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define SDP_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define SDP_D_OP_ENABLE_0_OP_EN_INIT_ENUM                              (DISABLE)
#define SDP_D_OP_ENABLE_0_OP_EN_DISABLE                      (_MK_ENUM_CONST(0))
#define SDP_D_OP_ENABLE_0_OP_EN_ENABLE                       (_MK_ENUM_CONST(1))


// Register SDP_D_DATA_CUBE_WIDTH_0
#define SDP_D_DATA_CUBE_WIDTH_0                         (_MK_ADDR_CONST(0xb03c))
#define SDP_D_DATA_CUBE_WIDTH_0_SECURE                                     (0x0)
#define SDP_D_DATA_CUBE_WIDTH_0_DUAL                                       (0x0)
#define SDP_D_DATA_CUBE_WIDTH_0_SCR                                          (0)
#define SDP_D_DATA_CUBE_WIDTH_0_WORD_COUNT                                 (0x1)
#define SDP_D_DATA_CUBE_WIDTH_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_WIDTH_0_RESET_MASK              (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_WIDTH_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_WIDTH_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_WIDTH_0_READ_MASK               (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_WIDTH_0_WRITE_MASK              (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_SHIFT                 (_MK_SHIFT_CONST(0))
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, SDP_D_DATA_CUBE_WIDTH_0_WIDTH_SHIFT))
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_RANGE                               (12:0)
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_WOFFSET                              (0x0)
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_DEFAULT_MASK      (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_WIDTH_0_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DATA_CUBE_HEIGHT_0
#define SDP_D_DATA_CUBE_HEIGHT_0                        (_MK_ADDR_CONST(0xb040))
#define SDP_D_DATA_CUBE_HEIGHT_0_SECURE                                    (0x0)
#define SDP_D_DATA_CUBE_HEIGHT_0_DUAL                                      (0x0)
#define SDP_D_DATA_CUBE_HEIGHT_0_SCR                                         (0)
#define SDP_D_DATA_CUBE_HEIGHT_0_WORD_COUNT                                (0x1)
#define SDP_D_DATA_CUBE_HEIGHT_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_HEIGHT_0_RESET_MASK             (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_HEIGHT_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_HEIGHT_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_HEIGHT_0_READ_MASK              (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_HEIGHT_0_WRITE_MASK             (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_SHIFT               (_MK_SHIFT_CONST(0))
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_SHIFT))
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_RANGE                             (12:0)
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_WOFFSET                            (0x0)
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_DEFAULT_MASK    (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_HEIGHT_0_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DATA_CUBE_CHANNEL_0
#define SDP_D_DATA_CUBE_CHANNEL_0                       (_MK_ADDR_CONST(0xb044))
#define SDP_D_DATA_CUBE_CHANNEL_0_SECURE                                   (0x0)
#define SDP_D_DATA_CUBE_CHANNEL_0_DUAL                                     (0x0)
#define SDP_D_DATA_CUBE_CHANNEL_0_SCR                                        (0)
#define SDP_D_DATA_CUBE_CHANNEL_0_WORD_COUNT                               (0x1)
#define SDP_D_DATA_CUBE_CHANNEL_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_CHANNEL_0_RESET_MASK            (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_CHANNEL_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_CHANNEL_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_CHANNEL_0_READ_MASK             (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_CHANNEL_0_WRITE_MASK            (_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_SHIFT             (_MK_SHIFT_CONST(0))
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_SHIFT))
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_RANGE                           (12:0)
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_WOFFSET                          (0x0)
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_DEFAULT          (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DATA_CUBE_CHANNEL_0_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DST_BASE_ADDR_LOW_0
#define SDP_D_DST_BASE_ADDR_LOW_0                       (_MK_ADDR_CONST(0xb048))
#define SDP_D_DST_BASE_ADDR_LOW_0_SECURE                                   (0x0)
#define SDP_D_DST_BASE_ADDR_LOW_0_DUAL                                     (0x0)
#define SDP_D_DST_BASE_ADDR_LOW_0_SCR                                        (0)
#define SDP_D_DST_BASE_ADDR_LOW_0_WORD_COUNT                               (0x1)
#define SDP_D_DST_BASE_ADDR_LOW_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_LOW_0_RESET_MASK        (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_BASE_ADDR_LOW_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_LOW_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_LOW_0_READ_MASK         (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_BASE_ADDR_LOW_0_WRITE_MASK        (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SHIFT))
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_RANGE                 (31:5)
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_WOFFSET                (0x0)
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DST_BASE_ADDR_HIGH_0
#define SDP_D_DST_BASE_ADDR_HIGH_0                      (_MK_ADDR_CONST(0xb04c))
#define SDP_D_DST_BASE_ADDR_HIGH_0_SECURE                                  (0x0)
#define SDP_D_DST_BASE_ADDR_HIGH_0_DUAL                                    (0x0)
#define SDP_D_DST_BASE_ADDR_HIGH_0_SCR                                       (0)
#define SDP_D_DST_BASE_ADDR_HIGH_0_WORD_COUNT                              (0x1)
#define SDP_D_DST_BASE_ADDR_HIGH_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_HIGH_0_RESET_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DST_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_HIGH_0_READ_MASK        (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DST_BASE_ADDR_HIGH_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SHIFT))
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_RANGE               (31:0)
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_WOFFSET              (0x0)
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DST_LINE_STRIDE_0
#define SDP_D_DST_LINE_STRIDE_0                         (_MK_ADDR_CONST(0xb050))
#define SDP_D_DST_LINE_STRIDE_0_SECURE                                     (0x0)
#define SDP_D_DST_LINE_STRIDE_0_DUAL                                       (0x0)
#define SDP_D_DST_LINE_STRIDE_0_SCR                                          (0)
#define SDP_D_DST_LINE_STRIDE_0_WORD_COUNT                                 (0x1)
#define SDP_D_DST_LINE_STRIDE_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_D_DST_LINE_STRIDE_0_RESET_MASK          (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_LINE_STRIDE_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define SDP_D_DST_LINE_STRIDE_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_D_DST_LINE_STRIDE_0_READ_MASK           (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_LINE_STRIDE_0_WRITE_MASK          (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SHIFT       (_MK_SHIFT_CONST(5))
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SHIFT))
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_RANGE                     (31:5)
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_WOFFSET                    (0x0)
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DST_SURFACE_STRIDE_0
#define SDP_D_DST_SURFACE_STRIDE_0                      (_MK_ADDR_CONST(0xb054))
#define SDP_D_DST_SURFACE_STRIDE_0_SECURE                                  (0x0)
#define SDP_D_DST_SURFACE_STRIDE_0_DUAL                                    (0x0)
#define SDP_D_DST_SURFACE_STRIDE_0_SCR                                       (0)
#define SDP_D_DST_SURFACE_STRIDE_0_WORD_COUNT                              (0x1)
#define SDP_D_DST_SURFACE_STRIDE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define SDP_D_DST_SURFACE_STRIDE_0_RESET_MASK       (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_SURFACE_STRIDE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define SDP_D_DST_SURFACE_STRIDE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define SDP_D_DST_SURFACE_STRIDE_0_READ_MASK        (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_SURFACE_STRIDE_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SHIFT))
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_RANGE               (31:5)
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_WOFFSET              (0x0)
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_BS_CFG_0
#define SDP_D_DP_BS_CFG_0                               (_MK_ADDR_CONST(0xb058))
#define SDP_D_DP_BS_CFG_0_SECURE                                           (0x0)
#define SDP_D_DP_BS_CFG_0_DUAL                                             (0x0)
#define SDP_D_DP_BS_CFG_0_SCR                                                (0)
#define SDP_D_DP_BS_CFG_0_WORD_COUNT                                       (0x1)
#define SDP_D_DP_BS_CFG_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_RESET_MASK                      (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_BS_CFG_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_READ_MASK                       (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_BS_CFG_0_WRITE_MASK                      (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_SHIFT                   (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BS_CFG_0_BS_BYPASS_SHIFT))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_RANGE                                  (0:0)
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_WOFFSET                                (0x0)
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_DEFAULT                (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_NO                       (_MK_ENUM_CONST(0))
#define SDP_D_DP_BS_CFG_0_BS_BYPASS_YES                      (_MK_ENUM_CONST(1))

#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_SHIFT               (_MK_SHIFT_CONST(1))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_SHIFT))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_RANGE                              (1:1)
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_WOFFSET                            (0x0)
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_BYPASS_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_SHIFT                 (_MK_SHIFT_CONST(2))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_SHIFT))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_RANGE                                (3:2)
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_WOFFSET                              (0x0)
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_DEFAULT_MASK         (_MK_MASK_CONST(0x3))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_MAX                    (_MK_ENUM_CONST(0))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_MIN                    (_MK_ENUM_CONST(1))
#define SDP_D_DP_BS_CFG_0_BS_ALU_ALGO_SUM                    (_MK_ENUM_CONST(2))

#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_SHIFT               (_MK_SHIFT_CONST(4))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_SHIFT))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_RANGE                              (4:4)
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_WOFFSET                            (0x0)
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_BYPASS_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_SHIFT                (_MK_SHIFT_CONST(5))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_SHIFT))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_RANGE                               (5:5)
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_WOFFSET                             (0x0)
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_DEFAULT             (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_DEFAULT_MASK        (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_NO                    (_MK_ENUM_CONST(0))
#define SDP_D_DP_BS_CFG_0_BS_MUL_PRELU_YES                   (_MK_ENUM_CONST(1))

#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_SHIFT              (_MK_SHIFT_CONST(6))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_SHIFT))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_RANGE                             (6:6)
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_WOFFSET                           (0x0)
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_NO                  (_MK_ENUM_CONST(0))
#define SDP_D_DP_BS_CFG_0_BS_RELU_BYPASS_YES                 (_MK_ENUM_CONST(1))


// Register SDP_D_DP_BS_ALU_CFG_0
#define SDP_D_DP_BS_ALU_CFG_0                           (_MK_ADDR_CONST(0xb05c))
#define SDP_D_DP_BS_ALU_CFG_0_SECURE                                       (0x0)
#define SDP_D_DP_BS_ALU_CFG_0_DUAL                                         (0x0)
#define SDP_D_DP_BS_ALU_CFG_0_SCR                                            (0)
#define SDP_D_DP_BS_ALU_CFG_0_WORD_COUNT                                   (0x1)
#define SDP_D_DP_BS_ALU_CFG_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_RESET_MASK                (_MK_MASK_CONST(0x3f01))
#define SDP_D_DP_BS_ALU_CFG_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_READ_MASK                 (_MK_MASK_CONST(0x3f01))
#define SDP_D_DP_BS_ALU_CFG_0_WRITE_MASK                (_MK_MASK_CONST(0x3f01))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_SHIFT))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_RANGE                             (0:0)
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_WOFFSET                           (0x0)
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_REG                 (_MK_ENUM_CONST(0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SRC_MEM                 (_MK_ENUM_CONST(1))

#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_SHIFT      (_MK_SHIFT_CONST(8))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_FIELD \
	(_MK_FIELD_CONST(0x3f, \
	SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_SHIFT))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_RANGE                    (13:8)
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_WOFFSET                   (0x0)
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_CFG_0_BS_ALU_SHIFT_VALUE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_BS_ALU_SRC_VALUE_0
#define SDP_D_DP_BS_ALU_SRC_VALUE_0                     (_MK_ADDR_CONST(0xb060))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_SECURE                                 (0x0)
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_DUAL                                   (0x0)
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_SCR                                      (0)
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_WORD_COUNT                             (0x1)
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_RESET_MASK          (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_READ_MASK           (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_WRITE_MASK          (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_SHIFT    (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_SHIFT))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_RANGE                  (15:0)
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_WOFFSET                 (0x0)
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_ALU_SRC_VALUE_0_BS_ALU_OPERAND_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_BS_MUL_CFG_0
#define SDP_D_DP_BS_MUL_CFG_0                           (_MK_ADDR_CONST(0xb064))
#define SDP_D_DP_BS_MUL_CFG_0_SECURE                                       (0x0)
#define SDP_D_DP_BS_MUL_CFG_0_DUAL                                         (0x0)
#define SDP_D_DP_BS_MUL_CFG_0_SCR                                            (0)
#define SDP_D_DP_BS_MUL_CFG_0_WORD_COUNT                                   (0x1)
#define SDP_D_DP_BS_MUL_CFG_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_RESET_MASK                (_MK_MASK_CONST(0xff01))
#define SDP_D_DP_BS_MUL_CFG_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_READ_MASK                 (_MK_MASK_CONST(0xff01))
#define SDP_D_DP_BS_MUL_CFG_0_WRITE_MASK                (_MK_MASK_CONST(0xff01))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_SHIFT))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_RANGE                             (0:0)
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_WOFFSET                           (0x0)
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_REG                 (_MK_ENUM_CONST(0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SRC_MEM                 (_MK_ENUM_CONST(1))

#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_SHIFT      (_MK_SHIFT_CONST(8))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_FIELD \
	(_MK_FIELD_CONST(0xff, \
	SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_SHIFT))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_RANGE                    (15:8)
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_WOFFSET                   (0x0)
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_CFG_0_BS_MUL_SHIFT_VALUE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_BS_MUL_SRC_VALUE_0
#define SDP_D_DP_BS_MUL_SRC_VALUE_0                     (_MK_ADDR_CONST(0xb068))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_SECURE                                 (0x0)
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_DUAL                                   (0x0)
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_SCR                                      (0)
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_WORD_COUNT                             (0x1)
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_RESET_MASK          (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_READ_MASK           (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_WRITE_MASK          (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_SHIFT    (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_SHIFT))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_RANGE                  (15:0)
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_WOFFSET                 (0x0)
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BS_MUL_SRC_VALUE_0_BS_MUL_OPERAND_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_BN_CFG_0
#define SDP_D_DP_BN_CFG_0                               (_MK_ADDR_CONST(0xb06c))
#define SDP_D_DP_BN_CFG_0_SECURE                                           (0x0)
#define SDP_D_DP_BN_CFG_0_DUAL                                             (0x0)
#define SDP_D_DP_BN_CFG_0_SCR                                                (0)
#define SDP_D_DP_BN_CFG_0_WORD_COUNT                                       (0x1)
#define SDP_D_DP_BN_CFG_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_RESET_MASK                      (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_BN_CFG_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_READ_MASK                       (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_BN_CFG_0_WRITE_MASK                      (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_SHIFT                   (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BN_CFG_0_BN_BYPASS_SHIFT))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_RANGE                                  (0:0)
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_WOFFSET                                (0x0)
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_DEFAULT                (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_NO                       (_MK_ENUM_CONST(0))
#define SDP_D_DP_BN_CFG_0_BN_BYPASS_YES                      (_MK_ENUM_CONST(1))

#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_SHIFT               (_MK_SHIFT_CONST(1))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_SHIFT))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_RANGE                              (1:1)
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_WOFFSET                            (0x0)
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_BYPASS_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_SHIFT                 (_MK_SHIFT_CONST(2))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_SHIFT))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_RANGE                                (3:2)
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_WOFFSET                              (0x0)
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_DEFAULT_MASK         (_MK_MASK_CONST(0x3))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_MAX                    (_MK_ENUM_CONST(0))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_MIN                    (_MK_ENUM_CONST(1))
#define SDP_D_DP_BN_CFG_0_BN_ALU_ALGO_SUM                    (_MK_ENUM_CONST(2))

#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_SHIFT               (_MK_SHIFT_CONST(4))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_SHIFT))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_RANGE                              (4:4)
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_WOFFSET                            (0x0)
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_BYPASS_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_SHIFT                (_MK_SHIFT_CONST(5))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_SHIFT))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_RANGE                               (5:5)
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_WOFFSET                             (0x0)
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_DEFAULT             (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_DEFAULT_MASK        (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_NO                    (_MK_ENUM_CONST(0))
#define SDP_D_DP_BN_CFG_0_BN_MUL_PRELU_YES                   (_MK_ENUM_CONST(1))

#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_SHIFT              (_MK_SHIFT_CONST(6))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_SHIFT))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_RANGE                             (6:6)
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_WOFFSET                           (0x0)
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_NO                  (_MK_ENUM_CONST(0))
#define SDP_D_DP_BN_CFG_0_BN_RELU_BYPASS_YES                 (_MK_ENUM_CONST(1))


// Register SDP_D_DP_BN_ALU_CFG_0
#define SDP_D_DP_BN_ALU_CFG_0                           (_MK_ADDR_CONST(0xb070))
#define SDP_D_DP_BN_ALU_CFG_0_SECURE                                       (0x0)
#define SDP_D_DP_BN_ALU_CFG_0_DUAL                                         (0x0)
#define SDP_D_DP_BN_ALU_CFG_0_SCR                                            (0)
#define SDP_D_DP_BN_ALU_CFG_0_WORD_COUNT                                   (0x1)
#define SDP_D_DP_BN_ALU_CFG_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_RESET_MASK                (_MK_MASK_CONST(0x3f01))
#define SDP_D_DP_BN_ALU_CFG_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_READ_MASK                 (_MK_MASK_CONST(0x3f01))
#define SDP_D_DP_BN_ALU_CFG_0_WRITE_MASK                (_MK_MASK_CONST(0x3f01))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_SHIFT))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_RANGE                             (0:0)
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_WOFFSET                           (0x0)
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_REG                 (_MK_ENUM_CONST(0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SRC_MEM                 (_MK_ENUM_CONST(1))

#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_SHIFT      (_MK_SHIFT_CONST(8))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_FIELD \
	(_MK_FIELD_CONST(0x3f, \
	SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_SHIFT))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_RANGE                    (13:8)
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_WOFFSET                   (0x0)
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_CFG_0_BN_ALU_SHIFT_VALUE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_BN_ALU_SRC_VALUE_0
#define SDP_D_DP_BN_ALU_SRC_VALUE_0                     (_MK_ADDR_CONST(0xb074))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_SECURE                                 (0x0)
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_DUAL                                   (0x0)
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_SCR                                      (0)
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_WORD_COUNT                             (0x1)
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_RESET_MASK          (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_READ_MASK           (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_WRITE_MASK          (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_SHIFT    (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_SHIFT))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_RANGE                  (15:0)
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_WOFFSET                 (0x0)
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_ALU_SRC_VALUE_0_BN_ALU_OPERAND_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_BN_MUL_CFG_0
#define SDP_D_DP_BN_MUL_CFG_0                           (_MK_ADDR_CONST(0xb078))
#define SDP_D_DP_BN_MUL_CFG_0_SECURE                                       (0x0)
#define SDP_D_DP_BN_MUL_CFG_0_DUAL                                         (0x0)
#define SDP_D_DP_BN_MUL_CFG_0_SCR                                            (0)
#define SDP_D_DP_BN_MUL_CFG_0_WORD_COUNT                                   (0x1)
#define SDP_D_DP_BN_MUL_CFG_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_RESET_MASK                (_MK_MASK_CONST(0xff01))
#define SDP_D_DP_BN_MUL_CFG_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_READ_MASK                 (_MK_MASK_CONST(0xff01))
#define SDP_D_DP_BN_MUL_CFG_0_WRITE_MASK                (_MK_MASK_CONST(0xff01))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_SHIFT))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_RANGE                             (0:0)
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_WOFFSET                           (0x0)
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_REG                 (_MK_ENUM_CONST(0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SRC_MEM                 (_MK_ENUM_CONST(1))

#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_SHIFT      (_MK_SHIFT_CONST(8))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_FIELD \
	(_MK_FIELD_CONST(0xff, \
	SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_SHIFT))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_RANGE                    (15:8)
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_WOFFSET                   (0x0)
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_CFG_0_BN_MUL_SHIFT_VALUE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_BN_MUL_SRC_VALUE_0
#define SDP_D_DP_BN_MUL_SRC_VALUE_0                     (_MK_ADDR_CONST(0xb07c))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_SECURE                                 (0x0)
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_DUAL                                   (0x0)
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_SCR                                      (0)
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_WORD_COUNT                             (0x1)
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_RESET_MASK          (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_READ_MASK           (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_WRITE_MASK          (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_SHIFT    (_MK_SHIFT_CONST(0))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_SHIFT))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_RANGE                  (15:0)
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_WOFFSET                 (0x0)
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_BN_MUL_SRC_VALUE_0_BN_MUL_OPERAND_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_CFG_0
#define SDP_D_DP_EW_CFG_0                               (_MK_ADDR_CONST(0xb080))
#define SDP_D_DP_EW_CFG_0_SECURE                                           (0x0)
#define SDP_D_DP_EW_CFG_0_DUAL                                             (0x0)
#define SDP_D_DP_EW_CFG_0_SCR                                                (0)
#define SDP_D_DP_EW_CFG_0_WORD_COUNT                                       (0x1)
#define SDP_D_DP_EW_CFG_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_RESET_MASK                      (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_EW_CFG_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_READ_MASK                       (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_EW_CFG_0_WRITE_MASK                      (_MK_MASK_CONST(0x7f))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_SHIFT                   (_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_CFG_0_EW_BYPASS_SHIFT))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_RANGE                                  (0:0)
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_WOFFSET                                (0x0)
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_DEFAULT                (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_DEFAULT_MASK           (_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_NO                       (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_CFG_0_EW_BYPASS_YES                      (_MK_ENUM_CONST(1))

#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_SHIFT               (_MK_SHIFT_CONST(1))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_SHIFT))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_RANGE                              (1:1)
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_WOFFSET                            (0x0)
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_BYPASS_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_SHIFT                 (_MK_SHIFT_CONST(2))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_SHIFT))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_RANGE                                (3:2)
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_WOFFSET                              (0x0)
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_DEFAULT_MASK         (_MK_MASK_CONST(0x3))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_MAX                    (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_MIN                    (_MK_ENUM_CONST(1))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_SUM                    (_MK_ENUM_CONST(2))
#define SDP_D_DP_EW_CFG_0_EW_ALU_ALGO_EQL                    (_MK_ENUM_CONST(3))

#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_SHIFT               (_MK_SHIFT_CONST(4))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_SHIFT))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_RANGE                              (4:4)
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_WOFFSET                            (0x0)
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_BYPASS_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_SHIFT                (_MK_SHIFT_CONST(5))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_SHIFT))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_RANGE                               (5:5)
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_WOFFSET                             (0x0)
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_DEFAULT             (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_DEFAULT_MASK        (_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_NO                    (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_CFG_0_EW_MUL_PRELU_YES                   (_MK_ENUM_CONST(1))

#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_SHIFT               (_MK_SHIFT_CONST(6))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_SHIFT))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_RANGE                              (6:6)
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_WOFFSET                            (0x0)
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_CFG_0_EW_LUT_BYPASS_YES                  (_MK_ENUM_CONST(1))


// Register SDP_D_DP_EW_ALU_CFG_0
#define SDP_D_DP_EW_ALU_CFG_0                           (_MK_ADDR_CONST(0xb084))
#define SDP_D_DP_EW_ALU_CFG_0_SECURE                                       (0x0)
#define SDP_D_DP_EW_ALU_CFG_0_DUAL                                         (0x0)
#define SDP_D_DP_EW_ALU_CFG_0_SCR                                            (0)
#define SDP_D_DP_EW_ALU_CFG_0_WORD_COUNT                                   (0x1)
#define SDP_D_DP_EW_ALU_CFG_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_RESET_MASK                   (_MK_MASK_CONST(0x3))
#define SDP_D_DP_EW_ALU_CFG_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_READ_MASK                    (_MK_MASK_CONST(0x3))
#define SDP_D_DP_EW_ALU_CFG_0_WRITE_MASK                   (_MK_MASK_CONST(0x3))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_SHIFT))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_RANGE                             (0:0)
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_WOFFSET                           (0x0)
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_REG                 (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_SRC_MEM                 (_MK_ENUM_CONST(1))

#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_SHIFT       (_MK_SHIFT_CONST(1))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_SHIFT))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_RANGE                      (1:1)
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_WOFFSET                    (0x0)
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_NO           (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_ALU_CFG_0_EW_ALU_CVT_BYPASS_YES          (_MK_ENUM_CONST(1))


// Register SDP_D_DP_EW_ALU_SRC_VALUE_0
#define SDP_D_DP_EW_ALU_SRC_VALUE_0                     (_MK_ADDR_CONST(0xb088))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_SECURE                                 (0x0)
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_DUAL                                   (0x0)
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_SCR                                      (0)
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_WORD_COUNT                             (0x1)
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_RESET_MASK      (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_READ_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_WRITE_MASK      (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_SHIFT    (_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_SHIFT))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_RANGE                  (31:0)
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_WOFFSET                 (0x0)
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_SRC_VALUE_0_EW_ALU_OPERAND_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0              (_MK_ADDR_CONST(0xb08c))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_SECURE                          (0x0)
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_DUAL                            (0x0)
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_SCR                               (0)
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_WORD_COUNT                      (0x1)
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_RESET_VAL       (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_SHIFT))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_RANGE        (31:0)
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_WOFFSET       (0x0)
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0_EW_ALU_CVT_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0               (_MK_ADDR_CONST(0xb090))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_SECURE                           (0x0)
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_DUAL                             (0x0)
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_SCR                                (0)
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_WORD_COUNT                       (0x1)
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_RESET_VAL        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_RESET_MASK    (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_READ_MASK     (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_WRITE_MASK    (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_SHIFT))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_RANGE          (15:0)
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_WOFFSET         (0x0)
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0_EW_ALU_CVT_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0            (_MK_ADDR_CONST(0xb094))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_SECURE                        (0x0)
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_DUAL                          (0x0)
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_SCR                             (0)
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_WORD_COUNT                    (0x1)
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_RESET_VAL     (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_RESET_MASK \
	(_MK_MASK_CONST(0x3f))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_READ_MASK    (_MK_MASK_CONST(0x3f))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_WRITE_MASK \
	(_MK_MASK_CONST(0x3f))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_FIELD \
	(_MK_FIELD_CONST(0x3f, \
	SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_SHIFT))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_RANGE     (5:0)
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_WOFFSET \
	(0x0)
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0_EW_ALU_CVT_TRUNCATE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_MUL_CFG_0
#define SDP_D_DP_EW_MUL_CFG_0                           (_MK_ADDR_CONST(0xb098))
#define SDP_D_DP_EW_MUL_CFG_0_SECURE                                       (0x0)
#define SDP_D_DP_EW_MUL_CFG_0_DUAL                                         (0x0)
#define SDP_D_DP_EW_MUL_CFG_0_SCR                                            (0)
#define SDP_D_DP_EW_MUL_CFG_0_WORD_COUNT                                   (0x1)
#define SDP_D_DP_EW_MUL_CFG_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_RESET_MASK                   (_MK_MASK_CONST(0x3))
#define SDP_D_DP_EW_MUL_CFG_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_READ_MASK                    (_MK_MASK_CONST(0x3))
#define SDP_D_DP_EW_MUL_CFG_0_WRITE_MASK                   (_MK_MASK_CONST(0x3))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_SHIFT))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_RANGE                             (0:0)
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_WOFFSET                           (0x0)
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_REG                 (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_SRC_MEM                 (_MK_ENUM_CONST(1))

#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_SHIFT       (_MK_SHIFT_CONST(1))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_SHIFT))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_RANGE                      (1:1)
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_WOFFSET                    (0x0)
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_NO           (_MK_ENUM_CONST(0))
#define SDP_D_DP_EW_MUL_CFG_0_EW_MUL_CVT_BYPASS_YES          (_MK_ENUM_CONST(1))


// Register SDP_D_DP_EW_MUL_SRC_VALUE_0
#define SDP_D_DP_EW_MUL_SRC_VALUE_0                     (_MK_ADDR_CONST(0xb09c))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_SECURE                                 (0x0)
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_DUAL                                   (0x0)
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_SCR                                      (0)
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_WORD_COUNT                             (0x1)
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_RESET_MASK      (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_READ_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_WRITE_MASK      (_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_SHIFT    (_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_SHIFT))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_RANGE                  (31:0)
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_WOFFSET                 (0x0)
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_SRC_VALUE_0_EW_MUL_OPERAND_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0              (_MK_ADDR_CONST(0xb0a0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_SECURE                          (0x0)
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_DUAL                            (0x0)
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_SCR                               (0)
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_WORD_COUNT                      (0x1)
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_RESET_VAL       (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_SHIFT))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_RANGE        (31:0)
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_WOFFSET       (0x0)
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0_EW_MUL_CVT_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0               (_MK_ADDR_CONST(0xb0a4))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_SECURE                           (0x0)
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_DUAL                             (0x0)
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_SCR                                (0)
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_WORD_COUNT                       (0x1)
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_RESET_VAL        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_RESET_MASK    (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_READ_MASK     (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_WRITE_MASK    (_MK_MASK_CONST(0xffff))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_SHIFT))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_RANGE          (15:0)
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_WOFFSET         (0x0)
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0_EW_MUL_CVT_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0            (_MK_ADDR_CONST(0xb0a8))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_SECURE                        (0x0)
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_DUAL                          (0x0)
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_SCR                             (0)
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_WORD_COUNT                    (0x1)
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_RESET_VAL     (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_RESET_MASK \
	(_MK_MASK_CONST(0x3f))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_READ_MASK    (_MK_MASK_CONST(0x3f))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_WRITE_MASK \
	(_MK_MASK_CONST(0x3f))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_FIELD \
	(_MK_FIELD_CONST(0x3f, \
	SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_SHIFT))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_RANGE     (5:0)
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_WOFFSET \
	(0x0)
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0_EW_MUL_CVT_TRUNCATE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DP_EW_TRUNCATE_VALUE_0
#define SDP_D_DP_EW_TRUNCATE_VALUE_0                    (_MK_ADDR_CONST(0xb0ac))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_SECURE                                (0x0)
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_DUAL                                  (0x0)
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_SCR                                     (0)
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_WORD_COUNT                            (0x1)
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_RESET_MASK          (_MK_MASK_CONST(0x3ff))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_READ_MASK           (_MK_MASK_CONST(0x3ff))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_WRITE_MASK          (_MK_MASK_CONST(0x3ff))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_SHIFT      (_MK_SHIFT_CONST(0))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_SHIFT))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_RANGE                     (9:0)
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_WOFFSET                   (0x0)
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DP_EW_TRUNCATE_VALUE_0_EW_TRUNCATE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_FEATURE_MODE_CFG_0
#define SDP_D_FEATURE_MODE_CFG_0                        (_MK_ADDR_CONST(0xb0b0))
#define SDP_D_FEATURE_MODE_CFG_0_SECURE                                    (0x0)
#define SDP_D_FEATURE_MODE_CFG_0_DUAL                                      (0x0)
#define SDP_D_FEATURE_MODE_CFG_0_SCR                                         (0)
#define SDP_D_FEATURE_MODE_CFG_0_WORD_COUNT                                (0x1)
#define SDP_D_FEATURE_MODE_CFG_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_RESET_MASK             (_MK_MASK_CONST(0x1f0f))
#define SDP_D_FEATURE_MODE_CFG_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_READ_MASK              (_MK_MASK_CONST(0x1f0f))
#define SDP_D_FEATURE_MODE_CFG_0_WRITE_MASK             (_MK_MASK_CONST(0x1f0f))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_SHIFT          (_MK_SHIFT_CONST(0))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_SHIFT))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_RANGE                         (0:0)
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_WOFFSET                       (0x0)
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_OFF             (_MK_ENUM_CONST(0))
#define SDP_D_FEATURE_MODE_CFG_0_FLYING_MODE_ON              (_MK_ENUM_CONST(1))

#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_SHIFT           (_MK_SHIFT_CONST(1))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_SHIFT))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_RANGE                          (1:1)
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_WOFFSET                        (0x0)
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_MEM              (_MK_ENUM_CONST(0))
#define SDP_D_FEATURE_MODE_CFG_0_OUTPUT_DST_PDP              (_MK_ENUM_CONST(1))

#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_SHIFT             (_MK_SHIFT_CONST(2))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_SHIFT))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_RANGE                            (2:2)
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_WOFFSET                          (0x0)
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_DEFAULT          (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_DEFAULT_MASK     (_MK_MASK_CONST(0x1))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_OFF                (_MK_ENUM_CONST(0))
#define SDP_D_FEATURE_MODE_CFG_0_WINOGRAD_ON                 (_MK_ENUM_CONST(1))

#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_SHIFT          (_MK_SHIFT_CONST(3))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_SHIFT))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_RANGE                         (3:3)
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_WOFFSET                       (0x0)
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_INIT_ENUM                 (DISABLE)
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_DISABLE         (_MK_ENUM_CONST(0))
#define SDP_D_FEATURE_MODE_CFG_0_NAN_TO_ZERO_ENABLE          (_MK_ENUM_CONST(1))

#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_SHIFT         (_MK_SHIFT_CONST(8))
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_FIELD \
	(_MK_FIELD_CONST(0x1f, SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_SHIFT))
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_RANGE                       (12:8)
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_WOFFSET                      (0x0)
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_FEATURE_MODE_CFG_0_BATCH_NUMBER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DST_DMA_CFG_0
#define SDP_D_DST_DMA_CFG_0                             (_MK_ADDR_CONST(0xb0b4))
#define SDP_D_DST_DMA_CFG_0_SECURE                                         (0x0)
#define SDP_D_DST_DMA_CFG_0_DUAL                                           (0x0)
#define SDP_D_DST_DMA_CFG_0_SCR                                              (0)
#define SDP_D_DST_DMA_CFG_0_WORD_COUNT                                     (0x1)
#define SDP_D_DST_DMA_CFG_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define SDP_D_DST_DMA_CFG_0_RESET_MASK                     (_MK_MASK_CONST(0x1))
#define SDP_D_DST_DMA_CFG_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_D_DST_DMA_CFG_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define SDP_D_DST_DMA_CFG_0_READ_MASK                      (_MK_MASK_CONST(0x1))
#define SDP_D_DST_DMA_CFG_0_WRITE_MASK                     (_MK_MASK_CONST(0x1))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SHIFT))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_RANGE                             (0:0)
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_WOFFSET                           (0x0)
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_CV                  (_MK_ENUM_CONST(0))
#define SDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_MC                  (_MK_ENUM_CONST(1))


// Register SDP_D_DST_BATCH_STRIDE_0
#define SDP_D_DST_BATCH_STRIDE_0                        (_MK_ADDR_CONST(0xb0b8))
#define SDP_D_DST_BATCH_STRIDE_0_SECURE                                    (0x0)
#define SDP_D_DST_BATCH_STRIDE_0_DUAL                                      (0x0)
#define SDP_D_DST_BATCH_STRIDE_0_SCR                                         (0)
#define SDP_D_DST_BATCH_STRIDE_0_WORD_COUNT                                (0x1)
#define SDP_D_DST_BATCH_STRIDE_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BATCH_STRIDE_0_RESET_MASK         (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_BATCH_STRIDE_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BATCH_STRIDE_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define SDP_D_DST_BATCH_STRIDE_0_READ_MASK          (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_BATCH_STRIDE_0_WRITE_MASK         (_MK_MASK_CONST(0xffffffe0))
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_SHIFT     (_MK_SHIFT_CONST(5))
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_SHIFT))
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_RANGE                   (31:5)
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_WOFFSET                  (0x0)
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DST_BATCH_STRIDE_0_DST_BATCH_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_DATA_FORMAT_0
#define SDP_D_DATA_FORMAT_0                             (_MK_ADDR_CONST(0xb0bc))
#define SDP_D_DATA_FORMAT_0_SECURE                                         (0x0)
#define SDP_D_DATA_FORMAT_0_DUAL                                           (0x0)
#define SDP_D_DATA_FORMAT_0_SCR                                              (0)
#define SDP_D_DATA_FORMAT_0_WORD_COUNT                                     (0x1)
#define SDP_D_DATA_FORMAT_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_RESET_MASK                     (_MK_MASK_CONST(0xf))
#define SDP_D_DATA_FORMAT_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_READ_MASK                      (_MK_MASK_CONST(0xf))
#define SDP_D_DATA_FORMAT_0_WRITE_MASK                     (_MK_MASK_CONST(0xf))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_SHIFT            (_MK_SHIFT_CONST(0))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_D_DATA_FORMAT_0_PROC_PRECISION_SHIFT))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_RANGE                           (1:0)
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_WOFFSET                         (0x0)
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_DEFAULT_MASK    (_MK_MASK_CONST(0x3))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_INT8              (_MK_ENUM_CONST(0))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_INT16             (_MK_ENUM_CONST(1))
#define SDP_D_DATA_FORMAT_0_PROC_PRECISION_FP16              (_MK_ENUM_CONST(2))

#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_SHIFT             (_MK_SHIFT_CONST(2))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_FIELD \
	(_MK_FIELD_CONST(0x3, SDP_D_DATA_FORMAT_0_OUT_PRECISION_SHIFT))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_RANGE                            (3:2)
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_WOFFSET                          (0x0)
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_DEFAULT          (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_DEFAULT_MASK     (_MK_MASK_CONST(0x3))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_INT8               (_MK_ENUM_CONST(0))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_INT16              (_MK_ENUM_CONST(1))
#define SDP_D_DATA_FORMAT_0_OUT_PRECISION_FP16               (_MK_ENUM_CONST(2))


// Register SDP_D_CVT_OFFSET_0
#define SDP_D_CVT_OFFSET_0                              (_MK_ADDR_CONST(0xb0c0))
#define SDP_D_CVT_OFFSET_0_SECURE                                          (0x0)
#define SDP_D_CVT_OFFSET_0_DUAL                                            (0x0)
#define SDP_D_CVT_OFFSET_0_SCR                                               (0)
#define SDP_D_CVT_OFFSET_0_WORD_COUNT                                      (0x1)
#define SDP_D_CVT_OFFSET_0_RESET_VAL                       (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_OFFSET_0_RESET_MASK               (_MK_MASK_CONST(0xffffffff))
#define SDP_D_CVT_OFFSET_0_SW_DEFAULT_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_OFFSET_0_SW_DEFAULT_MASK                 (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_OFFSET_0_READ_MASK                (_MK_MASK_CONST(0xffffffff))
#define SDP_D_CVT_OFFSET_0_WRITE_MASK               (_MK_MASK_CONST(0xffffffff))
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_SHIFT                 (_MK_SHIFT_CONST(0))
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_FIELD \
	(_MK_FIELD_CONST(0xffffffff, SDP_D_CVT_OFFSET_0_CVT_OFFSET_SHIFT))
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_RANGE                               (31:0)
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_WOFFSET                              (0x0)
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_OFFSET_0_CVT_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_CVT_SCALE_0
#define SDP_D_CVT_SCALE_0                               (_MK_ADDR_CONST(0xb0c4))
#define SDP_D_CVT_SCALE_0_SECURE                                           (0x0)
#define SDP_D_CVT_SCALE_0_DUAL                                             (0x0)
#define SDP_D_CVT_SCALE_0_SCR                                                (0)
#define SDP_D_CVT_SCALE_0_WORD_COUNT                                       (0x1)
#define SDP_D_CVT_SCALE_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SCALE_0_RESET_MASK                    (_MK_MASK_CONST(0xffff))
#define SDP_D_CVT_SCALE_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SCALE_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SCALE_0_READ_MASK                     (_MK_MASK_CONST(0xffff))
#define SDP_D_CVT_SCALE_0_WRITE_MASK                    (_MK_MASK_CONST(0xffff))
#define SDP_D_CVT_SCALE_0_CVT_SCALE_SHIFT                   (_MK_SHIFT_CONST(0))
#define SDP_D_CVT_SCALE_0_CVT_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, SDP_D_CVT_SCALE_0_CVT_SCALE_SHIFT))
#define SDP_D_CVT_SCALE_0_CVT_SCALE_RANGE                                 (15:0)
#define SDP_D_CVT_SCALE_0_CVT_SCALE_WOFFSET                                (0x0)
#define SDP_D_CVT_SCALE_0_CVT_SCALE_DEFAULT                (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SCALE_0_CVT_SCALE_DEFAULT_MASK        (_MK_MASK_CONST(0xffff))
#define SDP_D_CVT_SCALE_0_CVT_SCALE_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SCALE_0_CVT_SCALE_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SCALE_0_CVT_SCALE_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SCALE_0_CVT_SCALE_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register SDP_D_CVT_SHIFT_0
#define SDP_D_CVT_SHIFT_0                               (_MK_ADDR_CONST(0xb0c8))
#define SDP_D_CVT_SHIFT_0_SECURE                                           (0x0)
#define SDP_D_CVT_SHIFT_0_DUAL                                             (0x0)
#define SDP_D_CVT_SHIFT_0_SCR                                                (0)
#define SDP_D_CVT_SHIFT_0_WORD_COUNT                                       (0x1)
#define SDP_D_CVT_SHIFT_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SHIFT_0_RESET_MASK                      (_MK_MASK_CONST(0x3f))
#define SDP_D_CVT_SHIFT_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SHIFT_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SHIFT_0_READ_MASK                       (_MK_MASK_CONST(0x3f))
#define SDP_D_CVT_SHIFT_0_WRITE_MASK                      (_MK_MASK_CONST(0x3f))
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_SHIFT                   (_MK_SHIFT_CONST(0))
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x3f, SDP_D_CVT_SHIFT_0_CVT_SHIFT_SHIFT))
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_RANGE                                  (5:0)
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_WOFFSET                                (0x0)
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_DEFAULT                (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_DEFAULT_MASK          (_MK_MASK_CONST(0x3f))
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define SDP_D_CVT_SHIFT_0_CVT_SHIFT_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))


// Register SDP_D_STATUS_0
#define SDP_D_STATUS_0                                  (_MK_ADDR_CONST(0xb0cc))
#define SDP_D_STATUS_0_SECURE                                              (0x0)
#define SDP_D_STATUS_0_DUAL                                                (0x0)
#define SDP_D_STATUS_0_SCR                                                   (0)
#define SDP_D_STATUS_0_WORD_COUNT                                          (0x1)
#define SDP_D_STATUS_0_RESET_VAL                           (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_0_RESET_MASK                          (_MK_MASK_CONST(0x1))
#define SDP_D_STATUS_0_SW_DEFAULT_VAL                      (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_0_SW_DEFAULT_MASK                     (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_0_READ_MASK                           (_MK_MASK_CONST(0x1))
#define SDP_D_STATUS_0_WRITE_MASK                          (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_0_STATUS_UNEQUAL_SHIFT                 (_MK_SHIFT_CONST(0))
#define SDP_D_STATUS_0_STATUS_UNEQUAL_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_STATUS_0_STATUS_UNEQUAL_SHIFT))
#define SDP_D_STATUS_0_STATUS_UNEQUAL_RANGE                                (0:0)
#define SDP_D_STATUS_0_STATUS_UNEQUAL_WOFFSET                              (0x0)
#define SDP_D_STATUS_0_STATUS_UNEQUAL_DEFAULT              (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_0_STATUS_UNEQUAL_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define SDP_D_STATUS_0_STATUS_UNEQUAL_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_0_STATUS_UNEQUAL_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_0_STATUS_UNEQUAL_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_0_STATUS_UNEQUAL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_STATUS_NAN_INPUT_NUM_0
#define SDP_D_STATUS_NAN_INPUT_NUM_0                    (_MK_ADDR_CONST(0xb0d0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_SECURE                                (0x0)
#define SDP_D_STATUS_NAN_INPUT_NUM_0_DUAL                                  (0x0)
#define SDP_D_STATUS_NAN_INPUT_NUM_0_SCR                                     (0)
#define SDP_D_STATUS_NAN_INPUT_NUM_0_WORD_COUNT                            (0x1)
#define SDP_D_STATUS_NAN_INPUT_NUM_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_RESET_MASK     (_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_READ_MASK      (_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_WRITE_MASK            (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_SHIFT))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_RANGE           (31:0)
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_WOFFSET          (0x0)
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_INPUT_NUM_0_STATUS_NAN_INPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_STATUS_INF_INPUT_NUM_0
#define SDP_D_STATUS_INF_INPUT_NUM_0                    (_MK_ADDR_CONST(0xb0d4))
#define SDP_D_STATUS_INF_INPUT_NUM_0_SECURE                                (0x0)
#define SDP_D_STATUS_INF_INPUT_NUM_0_DUAL                                  (0x0)
#define SDP_D_STATUS_INF_INPUT_NUM_0_SCR                                     (0)
#define SDP_D_STATUS_INF_INPUT_NUM_0_WORD_COUNT                            (0x1)
#define SDP_D_STATUS_INF_INPUT_NUM_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_RESET_MASK     (_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_INF_INPUT_NUM_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_READ_MASK      (_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_INF_INPUT_NUM_0_WRITE_MASK            (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_SHIFT))
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_RANGE           (31:0)
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_WOFFSET          (0x0)
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_INF_INPUT_NUM_0_STATUS_INF_INPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_STATUS_NAN_OUTPUT_NUM_0
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0                   (_MK_ADDR_CONST(0xb0d8))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_SECURE                               (0x0)
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_DUAL                                 (0x0)
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_SCR                                    (0)
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_WORD_COUNT                           (0x1)
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_RESET_MASK    (_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_READ_MASK     (_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_WRITE_MASK           (_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_SHIFT \
	(_MK_SHIFT_CONST(0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_SHIFT))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_RANGE         (31:0)
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_WOFFSET        (0x0)
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_STATUS_NAN_OUTPUT_NUM_0_STATUS_NAN_OUTPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_PERF_ENABLE_0
#define SDP_D_PERF_ENABLE_0                             (_MK_ADDR_CONST(0xb0dc))
#define SDP_D_PERF_ENABLE_0_SECURE                                         (0x0)
#define SDP_D_PERF_ENABLE_0_DUAL                                           (0x0)
#define SDP_D_PERF_ENABLE_0_SCR                                              (0)
#define SDP_D_PERF_ENABLE_0_WORD_COUNT                                     (0x1)
#define SDP_D_PERF_ENABLE_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_RESET_MASK                     (_MK_MASK_CONST(0xf))
#define SDP_D_PERF_ENABLE_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_READ_MASK                      (_MK_MASK_CONST(0xf))
#define SDP_D_PERF_ENABLE_0_WRITE_MASK                     (_MK_MASK_CONST(0xf))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_SHIFT               (_MK_SHIFT_CONST(0))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_PERF_ENABLE_0_PERF_DMA_EN_SHIFT))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_RANGE                              (0:0)
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_WOFFSET                            (0x0)
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_INIT_ENUM                           (NO)
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_PERF_ENABLE_0_PERF_DMA_EN_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_SHIFT               (_MK_SHIFT_CONST(1))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_PERF_ENABLE_0_PERF_LUT_EN_SHIFT))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_RANGE                              (1:1)
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_WOFFSET                            (0x0)
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_INIT_ENUM                           (NO)
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_PERF_ENABLE_0_PERF_LUT_EN_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_SHIFT               (_MK_SHIFT_CONST(2))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_FIELD \
	(_MK_FIELD_CONST(0x1, SDP_D_PERF_ENABLE_0_PERF_SAT_EN_SHIFT))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_RANGE                              (2:2)
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_WOFFSET                            (0x0)
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_DEFAULT            (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_INIT_ENUM                           (NO)
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_NO                   (_MK_ENUM_CONST(0))
#define SDP_D_PERF_ENABLE_0_PERF_SAT_EN_YES                  (_MK_ENUM_CONST(1))

#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_SHIFT     (_MK_SHIFT_CONST(3))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_FIELD \
	(_MK_FIELD_CONST(0x1, \
	SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_SHIFT))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_RANGE                    (3:3)
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_WOFFSET                  (0x0)
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_INIT_ENUM                 (NO)
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_NO         (_MK_ENUM_CONST(0))
#define SDP_D_PERF_ENABLE_0_PERF_NAN_INF_COUNT_EN_YES        (_MK_ENUM_CONST(1))


// Register SDP_D_PERF_WDMA_WRITE_STALL_0
#define SDP_D_PERF_WDMA_WRITE_STALL_0                   (_MK_ADDR_CONST(0xb0e0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_SECURE                               (0x0)
#define SDP_D_PERF_WDMA_WRITE_STALL_0_DUAL                                 (0x0)
#define SDP_D_PERF_WDMA_WRITE_STALL_0_SCR                                    (0)
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WORD_COUNT                           (0x1)
#define SDP_D_PERF_WDMA_WRITE_STALL_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_RESET_MASK    (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_READ_MASK     (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WRITE_MASK           (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_SHIFT      (_MK_SHIFT_CONST(0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_SHIFT))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_RANGE                    (31:0)
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_WOFFSET                   (0x0)
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_WDMA_WRITE_STALL_0_WDMA_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_PERF_LUT_UFLOW_0
#define SDP_D_PERF_LUT_UFLOW_0                          (_MK_ADDR_CONST(0xb0e4))
#define SDP_D_PERF_LUT_UFLOW_0_SECURE                                      (0x0)
#define SDP_D_PERF_LUT_UFLOW_0_DUAL                                        (0x0)
#define SDP_D_PERF_LUT_UFLOW_0_SCR                                           (0)
#define SDP_D_PERF_LUT_UFLOW_0_WORD_COUNT                                  (0x1)
#define SDP_D_PERF_LUT_UFLOW_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_UFLOW_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_UFLOW_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_UFLOW_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_UFLOW_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_UFLOW_0_WRITE_MASK                  (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_FIELD \
	(_MK_FIELD_CONST(0xffffffff, SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_SHIFT))
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_RANGE                            (31:0)
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_WOFFSET                           (0x0)
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_UFLOW_0_LUT_UFLOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_PERF_LUT_OFLOW_0
#define SDP_D_PERF_LUT_OFLOW_0                          (_MK_ADDR_CONST(0xb0e8))
#define SDP_D_PERF_LUT_OFLOW_0_SECURE                                      (0x0)
#define SDP_D_PERF_LUT_OFLOW_0_DUAL                                        (0x0)
#define SDP_D_PERF_LUT_OFLOW_0_SCR                                           (0)
#define SDP_D_PERF_LUT_OFLOW_0_WORD_COUNT                                  (0x1)
#define SDP_D_PERF_LUT_OFLOW_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_OFLOW_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_OFLOW_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_OFLOW_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_OFLOW_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_OFLOW_0_WRITE_MASK                  (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_SHIFT              (_MK_SHIFT_CONST(0))
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_FIELD \
	(_MK_FIELD_CONST(0xffffffff, SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_SHIFT))
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_RANGE                            (31:0)
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_WOFFSET                           (0x0)
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_DEFAULT           (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_OFLOW_0_LUT_OFLOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_PERF_OUT_SATURATION_0
#define SDP_D_PERF_OUT_SATURATION_0                     (_MK_ADDR_CONST(0xb0ec))
#define SDP_D_PERF_OUT_SATURATION_0_SECURE                                 (0x0)
#define SDP_D_PERF_OUT_SATURATION_0_DUAL                                   (0x0)
#define SDP_D_PERF_OUT_SATURATION_0_SCR                                      (0)
#define SDP_D_PERF_OUT_SATURATION_0_WORD_COUNT                             (0x1)
#define SDP_D_PERF_OUT_SATURATION_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_OUT_SATURATION_0_RESET_MASK      (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_OUT_SATURATION_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_OUT_SATURATION_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_OUT_SATURATION_0_READ_MASK       (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_OUT_SATURATION_0_WRITE_MASK             (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_SHIFT    (_MK_SHIFT_CONST(0))
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_SHIFT))
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_RANGE                  (31:0)
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_WOFFSET                 (0x0)
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_OUT_SATURATION_0_OUT_SATURATION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_PERF_LUT_HYBRID_0
#define SDP_D_PERF_LUT_HYBRID_0                         (_MK_ADDR_CONST(0xb0f0))
#define SDP_D_PERF_LUT_HYBRID_0_SECURE                                     (0x0)
#define SDP_D_PERF_LUT_HYBRID_0_DUAL                                       (0x0)
#define SDP_D_PERF_LUT_HYBRID_0_SCR                                          (0)
#define SDP_D_PERF_LUT_HYBRID_0_WORD_COUNT                                 (0x1)
#define SDP_D_PERF_LUT_HYBRID_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_HYBRID_0_RESET_MASK          (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_HYBRID_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_HYBRID_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_HYBRID_0_READ_MASK           (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_HYBRID_0_WRITE_MASK                 (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_SHIFT            (_MK_SHIFT_CONST(0))
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_SHIFT))
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_RANGE                          (31:0)
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_WOFFSET                         (0x0)
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_HYBRID_0_LUT_HYBRID_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_PERF_LUT_LE_HIT_0
#define SDP_D_PERF_LUT_LE_HIT_0                         (_MK_ADDR_CONST(0xb0f4))
#define SDP_D_PERF_LUT_LE_HIT_0_SECURE                                     (0x0)
#define SDP_D_PERF_LUT_LE_HIT_0_DUAL                                       (0x0)
#define SDP_D_PERF_LUT_LE_HIT_0_SCR                                          (0)
#define SDP_D_PERF_LUT_LE_HIT_0_WORD_COUNT                                 (0x1)
#define SDP_D_PERF_LUT_LE_HIT_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LE_HIT_0_RESET_MASK          (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_LE_HIT_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LE_HIT_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LE_HIT_0_READ_MASK           (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_LE_HIT_0_WRITE_MASK                 (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_SHIFT            (_MK_SHIFT_CONST(0))
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_SHIFT))
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_RANGE                          (31:0)
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_WOFFSET                         (0x0)
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LE_HIT_0_LUT_LE_HIT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register SDP_D_PERF_LUT_LO_HIT_0
#define SDP_D_PERF_LUT_LO_HIT_0                         (_MK_ADDR_CONST(0xb0f8))
#define SDP_D_PERF_LUT_LO_HIT_0_SECURE                                     (0x0)
#define SDP_D_PERF_LUT_LO_HIT_0_DUAL                                       (0x0)
#define SDP_D_PERF_LUT_LO_HIT_0_SCR                                          (0)
#define SDP_D_PERF_LUT_LO_HIT_0_WORD_COUNT                                 (0x1)
#define SDP_D_PERF_LUT_LO_HIT_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LO_HIT_0_RESET_MASK          (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_LO_HIT_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LO_HIT_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LO_HIT_0_READ_MASK           (_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_LO_HIT_0_WRITE_MASK                 (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_SHIFT            (_MK_SHIFT_CONST(0))
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_SHIFT))
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_RANGE                          (31:0)
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_WOFFSET                         (0x0)
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_DEFAULT         (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define SDP_D_PERF_LUT_LO_HIT_0_LUT_LO_HIT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_S_STATUS_0
#define PDP_RDMA_S_STATUS_0                             (_MK_ADDR_CONST(0xc000))
#define PDP_RDMA_S_STATUS_0_SECURE                                         (0x0)
#define PDP_RDMA_S_STATUS_0_DUAL                                           (0x0)
#define PDP_RDMA_S_STATUS_0_SCR                                              (0)
#define PDP_RDMA_S_STATUS_0_WORD_COUNT                                     (0x1)
#define PDP_RDMA_S_STATUS_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_RESET_MASK                 (_MK_MASK_CONST(0x30003))
#define PDP_RDMA_S_STATUS_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_READ_MASK                  (_MK_MASK_CONST(0x30003))
#define PDP_RDMA_S_STATUS_0_WRITE_MASK                     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_0_SHIFT                  (_MK_SHIFT_CONST(0))
#define PDP_RDMA_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, PDP_RDMA_S_STATUS_0_STATUS_0_SHIFT))
#define PDP_RDMA_S_STATUS_0_STATUS_0_RANGE                                 (1:0)
#define PDP_RDMA_S_STATUS_0_STATUS_0_WOFFSET                               (0x0)
#define PDP_RDMA_S_STATUS_0_STATUS_0_DEFAULT               (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_0_DEFAULT_MASK          (_MK_MASK_CONST(0x3))
#define PDP_RDMA_S_STATUS_0_STATUS_0_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_0_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define PDP_RDMA_S_STATUS_0_STATUS_0_INIT_ENUM                            (IDLE)
#define PDP_RDMA_S_STATUS_0_STATUS_0_IDLE                    (_MK_ENUM_CONST(0))
#define PDP_RDMA_S_STATUS_0_STATUS_0_RUNNING                 (_MK_ENUM_CONST(1))
#define PDP_RDMA_S_STATUS_0_STATUS_0_PENDING                 (_MK_ENUM_CONST(2))

#define PDP_RDMA_S_STATUS_0_STATUS_1_SHIFT                 (_MK_SHIFT_CONST(16))
#define PDP_RDMA_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, PDP_RDMA_S_STATUS_0_STATUS_1_SHIFT))
#define PDP_RDMA_S_STATUS_0_STATUS_1_RANGE                               (17:16)
#define PDP_RDMA_S_STATUS_0_STATUS_1_WOFFSET                               (0x0)
#define PDP_RDMA_S_STATUS_0_STATUS_1_DEFAULT               (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_1_DEFAULT_MASK          (_MK_MASK_CONST(0x3))
#define PDP_RDMA_S_STATUS_0_STATUS_1_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_1_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define PDP_RDMA_S_STATUS_0_STATUS_1_INIT_ENUM                            (IDLE)
#define PDP_RDMA_S_STATUS_0_STATUS_1_IDLE                    (_MK_ENUM_CONST(0))
#define PDP_RDMA_S_STATUS_0_STATUS_1_RUNNING                 (_MK_ENUM_CONST(1))
#define PDP_RDMA_S_STATUS_0_STATUS_1_PENDING                 (_MK_ENUM_CONST(2))


// Register PDP_RDMA_S_POINTER_0
#define PDP_RDMA_S_POINTER_0                            (_MK_ADDR_CONST(0xc004))
#define PDP_RDMA_S_POINTER_0_SECURE                                        (0x0)
#define PDP_RDMA_S_POINTER_0_DUAL                                          (0x0)
#define PDP_RDMA_S_POINTER_0_SCR                                             (0)
#define PDP_RDMA_S_POINTER_0_WORD_COUNT                                    (0x1)
#define PDP_RDMA_S_POINTER_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_RESET_MASK                (_MK_MASK_CONST(0x10001))
#define PDP_RDMA_S_POINTER_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_READ_MASK                 (_MK_MASK_CONST(0x10001))
#define PDP_RDMA_S_POINTER_0_WRITE_MASK                    (_MK_MASK_CONST(0x1))
#define PDP_RDMA_S_POINTER_0_PRODUCER_SHIFT                 (_MK_SHIFT_CONST(0))
#define PDP_RDMA_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_RDMA_S_POINTER_0_PRODUCER_SHIFT))
#define PDP_RDMA_S_POINTER_0_PRODUCER_RANGE                                (0:0)
#define PDP_RDMA_S_POINTER_0_PRODUCER_WOFFSET                              (0x0)
#define PDP_RDMA_S_POINTER_0_PRODUCER_DEFAULT              (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_PRODUCER_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define PDP_RDMA_S_POINTER_0_PRODUCER_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_PRODUCER_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_S_POINTER_0_PRODUCER_INIT_ENUM                        (GROUP_0)
#define PDP_RDMA_S_POINTER_0_PRODUCER_GROUP_0                (_MK_ENUM_CONST(0))
#define PDP_RDMA_S_POINTER_0_PRODUCER_GROUP_1                (_MK_ENUM_CONST(1))

#define PDP_RDMA_S_POINTER_0_CONSUMER_SHIFT                (_MK_SHIFT_CONST(16))
#define PDP_RDMA_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_RDMA_S_POINTER_0_CONSUMER_SHIFT))
#define PDP_RDMA_S_POINTER_0_CONSUMER_RANGE                              (16:16)
#define PDP_RDMA_S_POINTER_0_CONSUMER_WOFFSET                              (0x0)
#define PDP_RDMA_S_POINTER_0_CONSUMER_DEFAULT              (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_CONSUMER_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define PDP_RDMA_S_POINTER_0_CONSUMER_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_CONSUMER_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_S_POINTER_0_CONSUMER_INIT_ENUM                        (GROUP_0)
#define PDP_RDMA_S_POINTER_0_CONSUMER_GROUP_0                (_MK_ENUM_CONST(0))
#define PDP_RDMA_S_POINTER_0_CONSUMER_GROUP_1                (_MK_ENUM_CONST(1))


// Register PDP_RDMA_D_OP_ENABLE_0
#define PDP_RDMA_D_OP_ENABLE_0                          (_MK_ADDR_CONST(0xc008))
#define PDP_RDMA_D_OP_ENABLE_0_SECURE                                      (0x0)
#define PDP_RDMA_D_OP_ENABLE_0_DUAL                                        (0x0)
#define PDP_RDMA_D_OP_ENABLE_0_SCR                                           (0)
#define PDP_RDMA_D_OP_ENABLE_0_WORD_COUNT                                  (0x1)
#define PDP_RDMA_D_OP_ENABLE_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OP_ENABLE_0_RESET_MASK                  (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_OP_ENABLE_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OP_ENABLE_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OP_ENABLE_0_READ_MASK                   (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_OP_ENABLE_0_WRITE_MASK                  (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_SHIFT                  (_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_RDMA_D_OP_ENABLE_0_OP_EN_SHIFT))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_RANGE                                 (0:0)
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_WOFFSET                               (0x0)
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_DEFAULT               (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK          (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_INIT_ENUM                         (DISABLE)
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_DISABLE                 (_MK_ENUM_CONST(0))
#define PDP_RDMA_D_OP_ENABLE_0_OP_EN_ENABLE                  (_MK_ENUM_CONST(1))


// Register PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0                 (_MK_ADDR_CONST(0xc00c))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_SECURE                             (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_DUAL                               (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_SCR                                  (0)
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_WORD_COUNT                         (0x1)
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_RESET_MASK      (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_READ_MASK       (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_WRITE_MASK      (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_SHIFT))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_RANGE               (12:0)
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_WOFFSET              (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0                (_MK_ADDR_CONST(0xc010))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_SECURE                            (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_DUAL                              (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_SCR                                 (0)
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_WORD_COUNT                        (0x1)
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_RESET_VAL         (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_RESET_MASK     (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_SW_DEFAULT_VAL    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_READ_MASK      (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_WRITE_MASK     (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_SHIFT))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_RANGE             (12:0)
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_WOFFSET            (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0               (_MK_ADDR_CONST(0xc014))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_SECURE                           (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_DUAL                             (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_SCR                                (0)
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_WORD_COUNT                       (0x1)
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_RESET_VAL        (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_RESET_MASK    (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_READ_MASK     (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_WRITE_MASK    (_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_SHIFT))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_RANGE           (12:0)
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_WOFFSET          (0x0)
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_FLYING_MODE_0
#define PDP_RDMA_D_FLYING_MODE_0                        (_MK_ADDR_CONST(0xc018))
#define PDP_RDMA_D_FLYING_MODE_0_SECURE                                    (0x0)
#define PDP_RDMA_D_FLYING_MODE_0_DUAL                                      (0x0)
#define PDP_RDMA_D_FLYING_MODE_0_SCR                                         (0)
#define PDP_RDMA_D_FLYING_MODE_0_WORD_COUNT                                (0x1)
#define PDP_RDMA_D_FLYING_MODE_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_FLYING_MODE_0_RESET_MASK                (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_FLYING_MODE_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_FLYING_MODE_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_FLYING_MODE_0_READ_MASK                 (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_FLYING_MODE_0_WRITE_MASK                (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_SHIFT          (_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_SHIFT))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_RANGE                         (0:0)
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_WOFFSET                       (0x0)
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_DEFAULT       (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_ON_FLYING       (_MK_ENUM_CONST(0))
#define PDP_RDMA_D_FLYING_MODE_0_FLYING_MODE_OFF_FLYING      (_MK_ENUM_CONST(1))


// Register PDP_RDMA_D_SRC_BASE_ADDR_LOW_0
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0                  (_MK_ADDR_CONST(0xc01c))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SECURE                              (0x0)
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_DUAL                                (0x0)
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SCR                                   (0)
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_WORD_COUNT                          (0x1)
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_READ_MASK    (_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SHIFT))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_RANGE            (31:5)
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_WOFFSET           (0x0)
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0                 (_MK_ADDR_CONST(0xc020))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SECURE                             (0x0)
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_DUAL                               (0x0)
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SCR                                  (0)
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_WORD_COUNT                         (0x1)
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SHIFT))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_RANGE          (31:0)
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_WOFFSET         (0x0)
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_SRC_LINE_STRIDE_0
#define PDP_RDMA_D_SRC_LINE_STRIDE_0                    (_MK_ADDR_CONST(0xc024))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SECURE                                (0x0)
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_DUAL                                  (0x0)
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SCR                                     (0)
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_WORD_COUNT                            (0x1)
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_RESET_MASK     (_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_READ_MASK      (_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_WRITE_MASK     (_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SHIFT))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_RANGE                (31:5)
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_WOFFSET               (0x0)
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_SRC_SURFACE_STRIDE_0
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0                 (_MK_ADDR_CONST(0xc028))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SECURE                             (0x0)
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_DUAL                               (0x0)
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SCR                                  (0)
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_WORD_COUNT                         (0x1)
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SHIFT))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_RANGE          (31:5)
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_WOFFSET         (0x0)
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_SRC_RAM_CFG_0
#define PDP_RDMA_D_SRC_RAM_CFG_0                        (_MK_ADDR_CONST(0xc02c))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SECURE                                    (0x0)
#define PDP_RDMA_D_SRC_RAM_CFG_0_DUAL                                      (0x0)
#define PDP_RDMA_D_SRC_RAM_CFG_0_SCR                                         (0)
#define PDP_RDMA_D_SRC_RAM_CFG_0_WORD_COUNT                                (0x1)
#define PDP_RDMA_D_SRC_RAM_CFG_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_RESET_MASK                (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_READ_MASK                 (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_SRC_RAM_CFG_0_WRITE_MASK                (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_SHIFT         (_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_SHIFT))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_RANGE                        (0:0)
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_WOFFSET                      (0x0)
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_DEFAULT      (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_CV             (_MK_ENUM_CONST(0))
#define PDP_RDMA_D_SRC_RAM_CFG_0_SRC_RAM_TYPE_MC             (_MK_ENUM_CONST(1))


// Register PDP_RDMA_D_DATA_FORMAT_0
#define PDP_RDMA_D_DATA_FORMAT_0                        (_MK_ADDR_CONST(0xc030))
#define PDP_RDMA_D_DATA_FORMAT_0_SECURE                                    (0x0)
#define PDP_RDMA_D_DATA_FORMAT_0_DUAL                                      (0x0)
#define PDP_RDMA_D_DATA_FORMAT_0_SCR                                         (0)
#define PDP_RDMA_D_DATA_FORMAT_0_WORD_COUNT                                (0x1)
#define PDP_RDMA_D_DATA_FORMAT_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_FORMAT_0_RESET_MASK                (_MK_MASK_CONST(0x3))
#define PDP_RDMA_D_DATA_FORMAT_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_FORMAT_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_FORMAT_0_READ_MASK                 (_MK_MASK_CONST(0x3))
#define PDP_RDMA_D_DATA_FORMAT_0_WRITE_MASK                (_MK_MASK_CONST(0x3))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_SHIFT           (_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_FIELD \
	(_MK_FIELD_CONST(0x3, PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_SHIFT))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_RANGE                          (1:0)
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_WOFFSET                        (0x0)
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_DEFAULT        (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_INT8             (_MK_ENUM_CONST(0))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_INT16            (_MK_ENUM_CONST(1))
#define PDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_FP16             (_MK_ENUM_CONST(2))


// Register PDP_RDMA_D_OPERATION_MODE_CFG_0
#define PDP_RDMA_D_OPERATION_MODE_CFG_0                 (_MK_ADDR_CONST(0xc034))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SECURE                             (0x0)
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_DUAL                               (0x0)
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SCR                                  (0)
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_WORD_COUNT                         (0x1)
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_RESET_MASK        (_MK_MASK_CONST(0xff))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_READ_MASK         (_MK_MASK_CONST(0xff))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_WRITE_MASK        (_MK_MASK_CONST(0xff))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_SHIFT     (_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_FIELD \
	(_MK_FIELD_CONST(0xff, \
	PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_SHIFT))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_RANGE                    (7:0)
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_WOFFSET                  (0x0)
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_OPERATION_MODE_CFG_0_SPLIT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_POOLING_KERNEL_CFG_0
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0                 (_MK_ADDR_CONST(0xc038))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_SECURE                             (0x0)
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_DUAL                               (0x0)
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_SCR                                  (0)
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_WORD_COUNT                         (0x1)
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_RESET_MASK        (_MK_MASK_CONST(0xff))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_READ_MASK         (_MK_MASK_CONST(0xff))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_WRITE_MASK        (_MK_MASK_CONST(0xff))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_FIELD \
	(_MK_FIELD_CONST(0xf, \
	PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_SHIFT))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_RANGE                 (3:0)
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_WOFFSET               (0x0)
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xf))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_1 \
	(_MK_ENUM_CONST(0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_2 \
	(_MK_ENUM_CONST(1))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_3 \
	(_MK_ENUM_CONST(2))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_4 \
	(_MK_ENUM_CONST(3))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_5 \
	(_MK_ENUM_CONST(4))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_6 \
	(_MK_ENUM_CONST(5))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_7 \
	(_MK_ENUM_CONST(6))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_8 \
	(_MK_ENUM_CONST(7))

#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_SHIFT \
	(_MK_SHIFT_CONST(4))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_FIELD \
	(_MK_FIELD_CONST(0xf, \
	PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_SHIFT))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_RANGE          (7:4)
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_WOFFSET        (0x0)
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xf))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_POOLING_PADDING_CFG_0
#define PDP_RDMA_D_POOLING_PADDING_CFG_0                (_MK_ADDR_CONST(0xc03c))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_SECURE                            (0x0)
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_DUAL                              (0x0)
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_SCR                                 (0)
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_WORD_COUNT                        (0x1)
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_RESET_VAL         (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_RESET_MASK        (_MK_MASK_CONST(0xf))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_SW_DEFAULT_VAL    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_READ_MASK         (_MK_MASK_CONST(0xf))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_WRITE_MASK        (_MK_MASK_CONST(0xf))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_SHIFT    (_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_FIELD \
	(_MK_FIELD_CONST(0xf, \
	PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_SHIFT))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_RANGE                   (3:0)
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_WOFFSET                 (0x0)
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xf))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_POOLING_PADDING_CFG_0_PAD_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_PARTIAL_WIDTH_IN_0
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0                   (_MK_ADDR_CONST(0xc040))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_SECURE                               (0x0)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_DUAL                                 (0x0)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_SCR                                    (0)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_WORD_COUNT                           (0x1)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_RESET_MASK    (_MK_MASK_CONST(0x3fffffff))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_READ_MASK     (_MK_MASK_CONST(0x3fffffff))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_WRITE_MASK    (_MK_MASK_CONST(0x3fffffff))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_SHIFT))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_RANGE         (9:0)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_WOFFSET       (0x0)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_SHIFT \
	(_MK_SHIFT_CONST(10))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_SHIFT))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_RANGE        (19:10)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_WOFFSET        (0x0)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_SHIFT \
	(_MK_SHIFT_CONST(20))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_SHIFT))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_RANGE         (29:20)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_WOFFSET         (0x0)
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_PERF_ENABLE_0
#define PDP_RDMA_D_PERF_ENABLE_0                        (_MK_ADDR_CONST(0xc044))
#define PDP_RDMA_D_PERF_ENABLE_0_SECURE                                    (0x0)
#define PDP_RDMA_D_PERF_ENABLE_0_DUAL                                      (0x0)
#define PDP_RDMA_D_PERF_ENABLE_0_SCR                                         (0)
#define PDP_RDMA_D_PERF_ENABLE_0_WORD_COUNT                                (0x1)
#define PDP_RDMA_D_PERF_ENABLE_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_ENABLE_0_RESET_MASK                (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_PERF_ENABLE_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_ENABLE_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_ENABLE_0_READ_MASK                 (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_PERF_ENABLE_0_WRITE_MASK                (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_SHIFT               (_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_SHIFT))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_RANGE                              (0:0)
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_WOFFSET                            (0x0)
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_DEFAULT            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_INIT_ENUM                      (DISABLE)
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_DISABLE              (_MK_ENUM_CONST(0))
#define PDP_RDMA_D_PERF_ENABLE_0_DMA_EN_ENABLE               (_MK_ENUM_CONST(1))


// Register PDP_RDMA_D_PERF_READ_STALL_0
#define PDP_RDMA_D_PERF_READ_STALL_0                    (_MK_ADDR_CONST(0xc048))
#define PDP_RDMA_D_PERF_READ_STALL_0_SECURE                                (0x0)
#define PDP_RDMA_D_PERF_READ_STALL_0_DUAL                                  (0x0)
#define PDP_RDMA_D_PERF_READ_STALL_0_SCR                                     (0)
#define PDP_RDMA_D_PERF_READ_STALL_0_WORD_COUNT                            (0x1)
#define PDP_RDMA_D_PERF_READ_STALL_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_READ_STALL_0_RESET_MASK     (_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_PERF_READ_STALL_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_READ_STALL_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_READ_STALL_0_READ_MASK      (_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_PERF_READ_STALL_0_WRITE_MASK            (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_SHIFT))
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_RANGE                (31:0)
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_WOFFSET               (0x0)
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_RDMA_D_CYA_0
#define PDP_RDMA_D_CYA_0                                (_MK_ADDR_CONST(0xc04c))
#define PDP_RDMA_D_CYA_0_SECURE                                            (0x0)
#define PDP_RDMA_D_CYA_0_DUAL                                              (0x0)
#define PDP_RDMA_D_CYA_0_SCR                                                 (0)
#define PDP_RDMA_D_CYA_0_WORD_COUNT                                        (0x1)
#define PDP_RDMA_D_CYA_0_RESET_VAL                         (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_CYA_0_RESET_MASK                 (_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_CYA_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_CYA_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_CYA_0_READ_MASK                  (_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_CYA_0_WRITE_MASK                 (_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_CYA_0_CYA_SHIFT                          (_MK_SHIFT_CONST(0))
#define PDP_RDMA_D_CYA_0_CYA_FIELD \
	(_MK_FIELD_CONST(0xffffffff, PDP_RDMA_D_CYA_0_CYA_SHIFT))
#define PDP_RDMA_D_CYA_0_CYA_RANGE                                        (31:0)
#define PDP_RDMA_D_CYA_0_CYA_WOFFSET                                       (0x0)
#define PDP_RDMA_D_CYA_0_CYA_DEFAULT                       (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_CYA_0_CYA_DEFAULT_MASK           (_MK_MASK_CONST(0xffffffff))
#define PDP_RDMA_D_CYA_0_CYA_SW_DEFAULT                    (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_CYA_0_CYA_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_CYA_0_CYA_PARITY_PROTECTION             (_MK_MASK_CONST(0x0))
#define PDP_RDMA_D_CYA_0_CYA_PLATFORM_DEPENDENT            (_MK_MASK_CONST(0x1))


// Register PDP_S_STATUS_0
#define PDP_S_STATUS_0                                  (_MK_ADDR_CONST(0xd000))
#define PDP_S_STATUS_0_SECURE                                              (0x0)
#define PDP_S_STATUS_0_DUAL                                                (0x0)
#define PDP_S_STATUS_0_SCR                                                   (0)
#define PDP_S_STATUS_0_WORD_COUNT                                          (0x1)
#define PDP_S_STATUS_0_RESET_VAL                           (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_RESET_MASK                      (_MK_MASK_CONST(0x30003))
#define PDP_S_STATUS_0_SW_DEFAULT_VAL                      (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_SW_DEFAULT_MASK                     (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_READ_MASK                       (_MK_MASK_CONST(0x30003))
#define PDP_S_STATUS_0_WRITE_MASK                          (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_0_SHIFT                       (_MK_SHIFT_CONST(0))
#define PDP_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, PDP_S_STATUS_0_STATUS_0_SHIFT))
#define PDP_S_STATUS_0_STATUS_0_RANGE                                      (1:0)
#define PDP_S_STATUS_0_STATUS_0_WOFFSET                                    (0x0)
#define PDP_S_STATUS_0_STATUS_0_DEFAULT                    (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_0_DEFAULT_MASK               (_MK_MASK_CONST(0x3))
#define PDP_S_STATUS_0_STATUS_0_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_0_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define PDP_S_STATUS_0_STATUS_0_INIT_ENUM                                 (IDLE)
#define PDP_S_STATUS_0_STATUS_0_IDLE                         (_MK_ENUM_CONST(0))
#define PDP_S_STATUS_0_STATUS_0_RUNNING                      (_MK_ENUM_CONST(1))
#define PDP_S_STATUS_0_STATUS_0_PENDING                      (_MK_ENUM_CONST(2))

#define PDP_S_STATUS_0_STATUS_1_SHIFT                      (_MK_SHIFT_CONST(16))
#define PDP_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, PDP_S_STATUS_0_STATUS_1_SHIFT))
#define PDP_S_STATUS_0_STATUS_1_RANGE                                    (17:16)
#define PDP_S_STATUS_0_STATUS_1_WOFFSET                                    (0x0)
#define PDP_S_STATUS_0_STATUS_1_DEFAULT                    (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_1_DEFAULT_MASK               (_MK_MASK_CONST(0x3))
#define PDP_S_STATUS_0_STATUS_1_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_1_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define PDP_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define PDP_S_STATUS_0_STATUS_1_INIT_ENUM                                 (IDLE)
#define PDP_S_STATUS_0_STATUS_1_IDLE                         (_MK_ENUM_CONST(0))
#define PDP_S_STATUS_0_STATUS_1_RUNNING                      (_MK_ENUM_CONST(1))
#define PDP_S_STATUS_0_STATUS_1_PENDING                      (_MK_ENUM_CONST(2))


// Register PDP_S_POINTER_0
#define PDP_S_POINTER_0                                 (_MK_ADDR_CONST(0xd004))
#define PDP_S_POINTER_0_SECURE                                             (0x0)
#define PDP_S_POINTER_0_DUAL                                               (0x0)
#define PDP_S_POINTER_0_SCR                                                  (0)
#define PDP_S_POINTER_0_WORD_COUNT                                         (0x1)
#define PDP_S_POINTER_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_RESET_MASK                     (_MK_MASK_CONST(0x10001))
#define PDP_S_POINTER_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_READ_MASK                      (_MK_MASK_CONST(0x10001))
#define PDP_S_POINTER_0_WRITE_MASK                         (_MK_MASK_CONST(0x1))
#define PDP_S_POINTER_0_PRODUCER_SHIFT                      (_MK_SHIFT_CONST(0))
#define PDP_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_S_POINTER_0_PRODUCER_SHIFT))
#define PDP_S_POINTER_0_PRODUCER_RANGE                                     (0:0)
#define PDP_S_POINTER_0_PRODUCER_WOFFSET                                   (0x0)
#define PDP_S_POINTER_0_PRODUCER_DEFAULT                   (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_PRODUCER_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define PDP_S_POINTER_0_PRODUCER_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_PRODUCER_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define PDP_S_POINTER_0_PRODUCER_INIT_ENUM                             (GROUP_0)
#define PDP_S_POINTER_0_PRODUCER_GROUP_0                     (_MK_ENUM_CONST(0))
#define PDP_S_POINTER_0_PRODUCER_GROUP_1                     (_MK_ENUM_CONST(1))

#define PDP_S_POINTER_0_CONSUMER_SHIFT                     (_MK_SHIFT_CONST(16))
#define PDP_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_S_POINTER_0_CONSUMER_SHIFT))
#define PDP_S_POINTER_0_CONSUMER_RANGE                                   (16:16)
#define PDP_S_POINTER_0_CONSUMER_WOFFSET                                   (0x0)
#define PDP_S_POINTER_0_CONSUMER_DEFAULT                   (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_CONSUMER_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define PDP_S_POINTER_0_CONSUMER_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_CONSUMER_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define PDP_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define PDP_S_POINTER_0_CONSUMER_INIT_ENUM                             (GROUP_0)
#define PDP_S_POINTER_0_CONSUMER_GROUP_0                     (_MK_ENUM_CONST(0))
#define PDP_S_POINTER_0_CONSUMER_GROUP_1                     (_MK_ENUM_CONST(1))


// Register PDP_D_OP_ENABLE_0
#define PDP_D_OP_ENABLE_0                               (_MK_ADDR_CONST(0xd008))
#define PDP_D_OP_ENABLE_0_SECURE                                           (0x0)
#define PDP_D_OP_ENABLE_0_DUAL                                             (0x0)
#define PDP_D_OP_ENABLE_0_SCR                                                (0)
#define PDP_D_OP_ENABLE_0_WORD_COUNT                                       (0x1)
#define PDP_D_OP_ENABLE_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define PDP_D_OP_ENABLE_0_RESET_MASK                       (_MK_MASK_CONST(0x1))
#define PDP_D_OP_ENABLE_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define PDP_D_OP_ENABLE_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define PDP_D_OP_ENABLE_0_READ_MASK                        (_MK_MASK_CONST(0x1))
#define PDP_D_OP_ENABLE_0_WRITE_MASK                       (_MK_MASK_CONST(0x1))
#define PDP_D_OP_ENABLE_0_OP_EN_SHIFT                       (_MK_SHIFT_CONST(0))
#define PDP_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_D_OP_ENABLE_0_OP_EN_SHIFT))
#define PDP_D_OP_ENABLE_0_OP_EN_RANGE                                      (0:0)
#define PDP_D_OP_ENABLE_0_OP_EN_WOFFSET                                    (0x0)
#define PDP_D_OP_ENABLE_0_OP_EN_DEFAULT                    (_MK_MASK_CONST(0x0))
#define PDP_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK               (_MK_MASK_CONST(0x1))
#define PDP_D_OP_ENABLE_0_OP_EN_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define PDP_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define PDP_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define PDP_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define PDP_D_OP_ENABLE_0_OP_EN_INIT_ENUM                              (DISABLE)
#define PDP_D_OP_ENABLE_0_OP_EN_DISABLE                      (_MK_ENUM_CONST(0))
#define PDP_D_OP_ENABLE_0_OP_EN_ENABLE                       (_MK_ENUM_CONST(1))


// Register PDP_D_DATA_CUBE_IN_WIDTH_0
#define PDP_D_DATA_CUBE_IN_WIDTH_0                      (_MK_ADDR_CONST(0xd00c))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_SECURE                                  (0x0)
#define PDP_D_DATA_CUBE_IN_WIDTH_0_DUAL                                    (0x0)
#define PDP_D_DATA_CUBE_IN_WIDTH_0_SCR                                       (0)
#define PDP_D_DATA_CUBE_IN_WIDTH_0_WORD_COUNT                              (0x1)
#define PDP_D_DATA_CUBE_IN_WIDTH_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_RESET_MASK           (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_READ_MASK            (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_WRITE_MASK           (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_SHIFT      (_MK_SHIFT_CONST(0))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_SHIFT))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_RANGE                    (12:0)
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_WOFFSET                   (0x0)
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_WIDTH_0_CUBE_IN_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DATA_CUBE_IN_HEIGHT_0
#define PDP_D_DATA_CUBE_IN_HEIGHT_0                     (_MK_ADDR_CONST(0xd010))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_SECURE                                 (0x0)
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_DUAL                                   (0x0)
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_SCR                                      (0)
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_WORD_COUNT                             (0x1)
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_RESET_MASK          (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_READ_MASK           (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_WRITE_MASK          (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_SHIFT    (_MK_SHIFT_CONST(0))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_SHIFT))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_RANGE                  (12:0)
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_WOFFSET                 (0x0)
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_HEIGHT_0_CUBE_IN_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DATA_CUBE_IN_CHANNEL_0
#define PDP_D_DATA_CUBE_IN_CHANNEL_0                    (_MK_ADDR_CONST(0xd014))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_SECURE                                (0x0)
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_DUAL                                  (0x0)
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_SCR                                     (0)
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_WORD_COUNT                            (0x1)
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_RESET_MASK         (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_READ_MASK          (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_WRITE_MASK         (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_SHIFT))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_RANGE                (12:0)
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_WOFFSET               (0x0)
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_IN_CHANNEL_0_CUBE_IN_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DATA_CUBE_OUT_WIDTH_0
#define PDP_D_DATA_CUBE_OUT_WIDTH_0                     (_MK_ADDR_CONST(0xd018))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_SECURE                                 (0x0)
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_DUAL                                   (0x0)
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_SCR                                      (0)
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_WORD_COUNT                             (0x1)
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_RESET_MASK          (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_READ_MASK           (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_WRITE_MASK          (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_SHIFT    (_MK_SHIFT_CONST(0))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_SHIFT))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_RANGE                  (12:0)
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_WOFFSET                 (0x0)
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_WIDTH_0_CUBE_OUT_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DATA_CUBE_OUT_HEIGHT_0
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0                    (_MK_ADDR_CONST(0xd01c))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_SECURE                                (0x0)
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_DUAL                                  (0x0)
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_SCR                                     (0)
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_WORD_COUNT                            (0x1)
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_RESET_MASK         (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_READ_MASK          (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_WRITE_MASK         (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_SHIFT))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_RANGE                (12:0)
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_WOFFSET               (0x0)
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_HEIGHT_0_CUBE_OUT_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DATA_CUBE_OUT_CHANNEL_0
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0                   (_MK_ADDR_CONST(0xd020))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_SECURE                               (0x0)
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_DUAL                                 (0x0)
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_SCR                                    (0)
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_WORD_COUNT                           (0x1)
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_RESET_MASK        (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_READ_MASK         (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_WRITE_MASK        (_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_SHIFT))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_RANGE              (12:0)
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_WOFFSET             (0x0)
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_CUBE_OUT_CHANNEL_0_CUBE_OUT_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_OPERATION_MODE_CFG_0
#define PDP_D_OPERATION_MODE_CFG_0                      (_MK_ADDR_CONST(0xd024))
#define PDP_D_OPERATION_MODE_CFG_0_SECURE                                  (0x0)
#define PDP_D_OPERATION_MODE_CFG_0_DUAL                                    (0x0)
#define PDP_D_OPERATION_MODE_CFG_0_SCR                                       (0)
#define PDP_D_OPERATION_MODE_CFG_0_WORD_COUNT                              (0x1)
#define PDP_D_OPERATION_MODE_CFG_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_RESET_MASK           (_MK_MASK_CONST(0xff13))
#define PDP_D_OPERATION_MODE_CFG_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_READ_MASK            (_MK_MASK_CONST(0xff13))
#define PDP_D_OPERATION_MODE_CFG_0_WRITE_MASK           (_MK_MASK_CONST(0xff13))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_SHIFT     (_MK_SHIFT_CONST(0))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_FIELD \
	(_MK_FIELD_CONST(0x3, \
	PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_SHIFT))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_RANGE                    (1:0)
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_WOFFSET                  (0x0)
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_POOLING_METHOD_AVERAGE \
	(_MK_ENUM_CONST(0))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_POOLING_METHOD_MAX \
	(_MK_ENUM_CONST(1))
#define PDP_D_OPERATION_MODE_CFG_0_POOLING_METHOD_POOLING_METHOD_MIN \
	(_MK_ENUM_CONST(2))

#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_SHIFT        (_MK_SHIFT_CONST(4))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_SHIFT))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_RANGE                       (4:4)
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_WOFFSET                     (0x0)
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_DEFAULT     (_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_ON_FLYING     (_MK_ENUM_CONST(0))
#define PDP_D_OPERATION_MODE_CFG_0_FLYING_MODE_OFF_FLYING    (_MK_ENUM_CONST(1))

#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_SHIFT          (_MK_SHIFT_CONST(8))
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_FIELD \
	(_MK_FIELD_CONST(0xff, PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_SHIFT))
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_RANGE                        (15:8)
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_WOFFSET                       (0x0)
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_DEFAULT       (_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_OPERATION_MODE_CFG_0_SPLIT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_NAN_FLUSH_TO_ZERO_0
#define PDP_D_NAN_FLUSH_TO_ZERO_0                       (_MK_ADDR_CONST(0xd028))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_SECURE                                   (0x0)
#define PDP_D_NAN_FLUSH_TO_ZERO_0_DUAL                                     (0x0)
#define PDP_D_NAN_FLUSH_TO_ZERO_0_SCR                                        (0)
#define PDP_D_NAN_FLUSH_TO_ZERO_0_WORD_COUNT                               (0x1)
#define PDP_D_NAN_FLUSH_TO_ZERO_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_RESET_MASK               (_MK_MASK_CONST(0x1))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_READ_MASK                (_MK_MASK_CONST(0x1))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_WRITE_MASK               (_MK_MASK_CONST(0x1))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SHIFT         (_MK_SHIFT_CONST(0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SHIFT))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_RANGE                        (0:0)
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_WOFFSET                      (0x0)
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DEFAULT      (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_INIT_ENUM                (DISABLE)
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DISABLE        (_MK_ENUM_CONST(0))
#define PDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_ENABLE         (_MK_ENUM_CONST(1))


// Register PDP_D_PARTIAL_WIDTH_IN_0
#define PDP_D_PARTIAL_WIDTH_IN_0                        (_MK_ADDR_CONST(0xd02c))
#define PDP_D_PARTIAL_WIDTH_IN_0_SECURE                                    (0x0)
#define PDP_D_PARTIAL_WIDTH_IN_0_DUAL                                      (0x0)
#define PDP_D_PARTIAL_WIDTH_IN_0_SCR                                         (0)
#define PDP_D_PARTIAL_WIDTH_IN_0_WORD_COUNT                                (0x1)
#define PDP_D_PARTIAL_WIDTH_IN_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_RESET_MASK         (_MK_MASK_CONST(0x3fffffff))
#define PDP_D_PARTIAL_WIDTH_IN_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_READ_MASK          (_MK_MASK_CONST(0x3fffffff))
#define PDP_D_PARTIAL_WIDTH_IN_0_WRITE_MASK         (_MK_MASK_CONST(0x3fffffff))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_SHIFT))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_RANGE              (9:0)
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_WOFFSET            (0x0)
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_FIRST_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_SHIFT \
	(_MK_SHIFT_CONST(10))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_SHIFT))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_RANGE             (19:10)
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_WOFFSET             (0x0)
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_LAST_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_SHIFT \
	(_MK_SHIFT_CONST(20))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_SHIFT))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_RANGE              (29:20)
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_WOFFSET              (0x0)
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_IN_0_PARTIAL_WIDTH_IN_MID_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_PARTIAL_WIDTH_OUT_0
#define PDP_D_PARTIAL_WIDTH_OUT_0                       (_MK_ADDR_CONST(0xd030))
#define PDP_D_PARTIAL_WIDTH_OUT_0_SECURE                                   (0x0)
#define PDP_D_PARTIAL_WIDTH_OUT_0_DUAL                                     (0x0)
#define PDP_D_PARTIAL_WIDTH_OUT_0_SCR                                        (0)
#define PDP_D_PARTIAL_WIDTH_OUT_0_WORD_COUNT                               (0x1)
#define PDP_D_PARTIAL_WIDTH_OUT_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_RESET_MASK        (_MK_MASK_CONST(0x3fffffff))
#define PDP_D_PARTIAL_WIDTH_OUT_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_READ_MASK         (_MK_MASK_CONST(0x3fffffff))
#define PDP_D_PARTIAL_WIDTH_OUT_0_WRITE_MASK        (_MK_MASK_CONST(0x3fffffff))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_SHIFT))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_RANGE            (9:0)
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_WOFFSET          (0x0)
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_FIRST_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_SHIFT \
	(_MK_SHIFT_CONST(10))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_SHIFT))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_RANGE           (19:10)
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_WOFFSET           (0x0)
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_LAST_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_SHIFT \
	(_MK_SHIFT_CONST(20))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_FIELD \
	(_MK_FIELD_CONST(0x3ff, \
	PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_SHIFT))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_RANGE            (29:20)
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_WOFFSET            (0x0)
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3ff))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PARTIAL_WIDTH_OUT_0_PARTIAL_WIDTH_OUT_MID_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_KERNEL_CFG_0
#define PDP_D_POOLING_KERNEL_CFG_0                      (_MK_ADDR_CONST(0xd034))
#define PDP_D_POOLING_KERNEL_CFG_0_SECURE                                  (0x0)
#define PDP_D_POOLING_KERNEL_CFG_0_DUAL                                    (0x0)
#define PDP_D_POOLING_KERNEL_CFG_0_SCR                                       (0)
#define PDP_D_POOLING_KERNEL_CFG_0_WORD_COUNT                              (0x1)
#define PDP_D_POOLING_KERNEL_CFG_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_RESET_MASK         (_MK_MASK_CONST(0xff0f0f))
#define PDP_D_POOLING_KERNEL_CFG_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_READ_MASK          (_MK_MASK_CONST(0xff0f0f))
#define PDP_D_POOLING_KERNEL_CFG_0_WRITE_MASK         (_MK_MASK_CONST(0xff0f0f))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_SHIFT       (_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_FIELD \
	(_MK_FIELD_CONST(0xf, PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_SHIFT))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_RANGE                      (3:0)
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_WOFFSET                    (0x0)
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_DEFAULT    (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xf))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_1 \
	(_MK_ENUM_CONST(0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_2 \
	(_MK_ENUM_CONST(1))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_3 \
	(_MK_ENUM_CONST(2))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_4 \
	(_MK_ENUM_CONST(3))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_5 \
	(_MK_ENUM_CONST(4))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_6 \
	(_MK_ENUM_CONST(5))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_7 \
	(_MK_ENUM_CONST(6))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_WIDTH_KERNEL_WIDTH_8 \
	(_MK_ENUM_CONST(7))

#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_SHIFT      (_MK_SHIFT_CONST(8))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0xf, \
	PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_SHIFT))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_RANGE                    (11:8)
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_WOFFSET                   (0x0)
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xf))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_KERNEL_HEIGHT_1 \
	(_MK_ENUM_CONST(0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_KERNEL_HEIGHT_2 \
	(_MK_ENUM_CONST(1))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_KERNEL_HEIGHT_3 \
	(_MK_ENUM_CONST(2))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_KERNEL_HEIGHT_4 \
	(_MK_ENUM_CONST(3))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_KERNEL_HEIGHT_5 \
	(_MK_ENUM_CONST(4))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_KERNEL_HEIGHT_6 \
	(_MK_ENUM_CONST(5))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_KERNEL_HEIGHT_7 \
	(_MK_ENUM_CONST(6))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_HEIGHT_KERNEL_HEIGHT_8 \
	(_MK_ENUM_CONST(7))

#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_SHIFT \
	(_MK_SHIFT_CONST(16))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_FIELD \
	(_MK_FIELD_CONST(0xf, \
	PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_SHIFT))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_RANGE             (19:16)
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_WOFFSET             (0x0)
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xf))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_SHIFT \
	(_MK_SHIFT_CONST(20))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0xf, \
	PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_SHIFT))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_RANGE            (23:20)
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_WOFFSET            (0x0)
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xf))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_KERNEL_CFG_0_KERNEL_STRIDE_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_RECIP_KERNEL_WIDTH_0
#define PDP_D_RECIP_KERNEL_WIDTH_0                      (_MK_ADDR_CONST(0xd038))
#define PDP_D_RECIP_KERNEL_WIDTH_0_SECURE                                  (0x0)
#define PDP_D_RECIP_KERNEL_WIDTH_0_DUAL                                    (0x0)
#define PDP_D_RECIP_KERNEL_WIDTH_0_SCR                                       (0)
#define PDP_D_RECIP_KERNEL_WIDTH_0_WORD_COUNT                              (0x1)
#define PDP_D_RECIP_KERNEL_WIDTH_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RESET_MASK          (_MK_MASK_CONST(0x1ffff))
#define PDP_D_RECIP_KERNEL_WIDTH_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_WIDTH_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_WIDTH_0_READ_MASK           (_MK_MASK_CONST(0x1ffff))
#define PDP_D_RECIP_KERNEL_WIDTH_0_WRITE_MASK          (_MK_MASK_CONST(0x1ffff))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1ffff, \
	PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_SHIFT))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_RANGE               (16:0)
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_WOFFSET              (0x0)
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1ffff))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_WIDTH_0_RECIP_KERNEL_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_RECIP_KERNEL_HEIGHT_0
#define PDP_D_RECIP_KERNEL_HEIGHT_0                     (_MK_ADDR_CONST(0xd03c))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_SECURE                                 (0x0)
#define PDP_D_RECIP_KERNEL_HEIGHT_0_DUAL                                   (0x0)
#define PDP_D_RECIP_KERNEL_HEIGHT_0_SCR                                      (0)
#define PDP_D_RECIP_KERNEL_HEIGHT_0_WORD_COUNT                             (0x1)
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RESET_MASK         (_MK_MASK_CONST(0x1ffff))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_READ_MASK          (_MK_MASK_CONST(0x1ffff))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_WRITE_MASK         (_MK_MASK_CONST(0x1ffff))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1ffff, \
	PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_SHIFT))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_RANGE             (16:0)
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_WOFFSET            (0x0)
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1ffff))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_RECIP_KERNEL_HEIGHT_0_RECIP_KERNEL_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_PADDING_CFG_0
#define PDP_D_POOLING_PADDING_CFG_0                     (_MK_ADDR_CONST(0xd040))
#define PDP_D_POOLING_PADDING_CFG_0_SECURE                                 (0x0)
#define PDP_D_POOLING_PADDING_CFG_0_DUAL                                   (0x0)
#define PDP_D_POOLING_PADDING_CFG_0_SCR                                      (0)
#define PDP_D_POOLING_PADDING_CFG_0_WORD_COUNT                             (0x1)
#define PDP_D_POOLING_PADDING_CFG_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_RESET_MASK          (_MK_MASK_CONST(0x7777))
#define PDP_D_POOLING_PADDING_CFG_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_READ_MASK           (_MK_MASK_CONST(0x7777))
#define PDP_D_POOLING_PADDING_CFG_0_WRITE_MASK          (_MK_MASK_CONST(0x7777))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_SHIFT          (_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_FIELD \
	(_MK_FIELD_CONST(0x7, PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_SHIFT))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_RANGE                         (2:0)
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_WOFFSET                       (0x0)
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_DEFAULT       (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_LEFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_SHIFT           (_MK_SHIFT_CONST(4))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_FIELD \
	(_MK_FIELD_CONST(0x7, PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_SHIFT))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_RANGE                          (6:4)
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_WOFFSET                        (0x0)
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_DEFAULT        (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_TOP_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_SHIFT         (_MK_SHIFT_CONST(8))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_FIELD \
	(_MK_FIELD_CONST(0x7, PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_SHIFT))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_RANGE                       (10:8)
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_WOFFSET                      (0x0)
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_DEFAULT      (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_RIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_SHIFT       (_MK_SHIFT_CONST(12))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_FIELD \
	(_MK_FIELD_CONST(0x7, PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_SHIFT))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_RANGE                     (14:12)
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_WOFFSET                     (0x0)
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_DEFAULT     (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_CFG_0_PAD_BOTTOM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_PADDING_VALUE_1_CFG_0
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0             (_MK_ADDR_CONST(0xd044))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_SECURE                         (0x0)
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_DUAL                           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_SCR                              (0)
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_WORD_COUNT                     (0x1)
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_RESET_VAL      (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_RESET_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_READ_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_WRITE_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_FIELD \
	(_MK_FIELD_CONST(0x7ffff, \
	PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_SHIFT))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_RANGE            (18:0)
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_WOFFSET           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_1_CFG_0_PAD_VALUE_1X_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_PADDING_VALUE_2_CFG_0
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0             (_MK_ADDR_CONST(0xd048))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_SECURE                         (0x0)
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_DUAL                           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_SCR                              (0)
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_WORD_COUNT                     (0x1)
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_RESET_VAL      (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_RESET_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_READ_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_WRITE_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_FIELD \
	(_MK_FIELD_CONST(0x7ffff, \
	PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_SHIFT))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_RANGE            (18:0)
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_WOFFSET           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_2_CFG_0_PAD_VALUE_2X_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_PADDING_VALUE_3_CFG_0
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0             (_MK_ADDR_CONST(0xd04c))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_SECURE                         (0x0)
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_DUAL                           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_SCR                              (0)
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_WORD_COUNT                     (0x1)
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_RESET_VAL      (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_RESET_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_READ_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_WRITE_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_FIELD \
	(_MK_FIELD_CONST(0x7ffff, \
	PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_SHIFT))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_RANGE            (18:0)
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_WOFFSET           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_3_CFG_0_PAD_VALUE_3X_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_PADDING_VALUE_4_CFG_0
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0             (_MK_ADDR_CONST(0xd050))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_SECURE                         (0x0)
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_DUAL                           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_SCR                              (0)
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_WORD_COUNT                     (0x1)
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_RESET_VAL      (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_RESET_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_READ_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_WRITE_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_FIELD \
	(_MK_FIELD_CONST(0x7ffff, \
	PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_SHIFT))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_RANGE            (18:0)
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_WOFFSET           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_4_CFG_0_PAD_VALUE_4X_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_PADDING_VALUE_5_CFG_0
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0             (_MK_ADDR_CONST(0xd054))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_SECURE                         (0x0)
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_DUAL                           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_SCR                              (0)
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_WORD_COUNT                     (0x1)
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_RESET_VAL      (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_RESET_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_READ_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_WRITE_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_FIELD \
	(_MK_FIELD_CONST(0x7ffff, \
	PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_SHIFT))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_RANGE            (18:0)
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_WOFFSET           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_5_CFG_0_PAD_VALUE_5X_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_PADDING_VALUE_6_CFG_0
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0             (_MK_ADDR_CONST(0xd058))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_SECURE                         (0x0)
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_DUAL                           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_SCR                              (0)
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_WORD_COUNT                     (0x1)
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_RESET_VAL      (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_RESET_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_READ_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_WRITE_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_FIELD \
	(_MK_FIELD_CONST(0x7ffff, \
	PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_SHIFT))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_RANGE            (18:0)
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_WOFFSET           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_6_CFG_0_PAD_VALUE_6X_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_POOLING_PADDING_VALUE_7_CFG_0
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0             (_MK_ADDR_CONST(0xd05c))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_SECURE                         (0x0)
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_DUAL                           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_SCR                              (0)
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_WORD_COUNT                     (0x1)
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_RESET_VAL      (_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_RESET_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_SW_DEFAULT_VAL \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_READ_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_WRITE_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_FIELD \
	(_MK_FIELD_CONST(0x7ffff, \
	PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_SHIFT))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_RANGE            (18:0)
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_WOFFSET           (0x0)
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffff))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_POOLING_PADDING_VALUE_7_CFG_0_PAD_VALUE_7X_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_SRC_BASE_ADDR_LOW_0
#define PDP_D_SRC_BASE_ADDR_LOW_0                       (_MK_ADDR_CONST(0xd060))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SECURE                                   (0x0)
#define PDP_D_SRC_BASE_ADDR_LOW_0_DUAL                                     (0x0)
#define PDP_D_SRC_BASE_ADDR_LOW_0_SCR                                        (0)
#define PDP_D_SRC_BASE_ADDR_LOW_0_WORD_COUNT                               (0x1)
#define PDP_D_SRC_BASE_ADDR_LOW_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_RESET_MASK        (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_READ_MASK         (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_WRITE_MASK        (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SHIFT))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_RANGE                 (31:5)
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_WOFFSET                (0x0)
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_SRC_BASE_ADDR_HIGH_0
#define PDP_D_SRC_BASE_ADDR_HIGH_0                      (_MK_ADDR_CONST(0xd064))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SECURE                                  (0x0)
#define PDP_D_SRC_BASE_ADDR_HIGH_0_DUAL                                    (0x0)
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SCR                                       (0)
#define PDP_D_SRC_BASE_ADDR_HIGH_0_WORD_COUNT                              (0x1)
#define PDP_D_SRC_BASE_ADDR_HIGH_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_RESET_MASK       (_MK_MASK_CONST(0xffffffff))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_READ_MASK        (_MK_MASK_CONST(0xffffffff))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffff))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SHIFT))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_RANGE               (31:0)
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_WOFFSET              (0x0)
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_SRC_LINE_STRIDE_0
#define PDP_D_SRC_LINE_STRIDE_0                         (_MK_ADDR_CONST(0xd068))
#define PDP_D_SRC_LINE_STRIDE_0_SECURE                                     (0x0)
#define PDP_D_SRC_LINE_STRIDE_0_DUAL                                       (0x0)
#define PDP_D_SRC_LINE_STRIDE_0_SCR                                          (0)
#define PDP_D_SRC_LINE_STRIDE_0_WORD_COUNT                                 (0x1)
#define PDP_D_SRC_LINE_STRIDE_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_LINE_STRIDE_0_RESET_MASK          (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_LINE_STRIDE_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_LINE_STRIDE_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_LINE_STRIDE_0_READ_MASK           (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_LINE_STRIDE_0_WRITE_MASK          (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SHIFT       (_MK_SHIFT_CONST(5))
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SHIFT))
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_RANGE                     (31:5)
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_WOFFSET                    (0x0)
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_DEFAULT    (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_SRC_SURFACE_STRIDE_0
#define PDP_D_SRC_SURFACE_STRIDE_0                      (_MK_ADDR_CONST(0xd06c))
#define PDP_D_SRC_SURFACE_STRIDE_0_SECURE                                  (0x0)
#define PDP_D_SRC_SURFACE_STRIDE_0_DUAL                                    (0x0)
#define PDP_D_SRC_SURFACE_STRIDE_0_SCR                                       (0)
#define PDP_D_SRC_SURFACE_STRIDE_0_WORD_COUNT                              (0x1)
#define PDP_D_SRC_SURFACE_STRIDE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_SURFACE_STRIDE_0_RESET_MASK       (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_SURFACE_STRIDE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_SURFACE_STRIDE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_SRC_SURFACE_STRIDE_0_READ_MASK        (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_SURFACE_STRIDE_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SHIFT))
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_RANGE               (31:5)
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_WOFFSET              (0x0)
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DST_BASE_ADDR_LOW_0
#define PDP_D_DST_BASE_ADDR_LOW_0                       (_MK_ADDR_CONST(0xd070))
#define PDP_D_DST_BASE_ADDR_LOW_0_SECURE                                   (0x0)
#define PDP_D_DST_BASE_ADDR_LOW_0_DUAL                                     (0x0)
#define PDP_D_DST_BASE_ADDR_LOW_0_SCR                                        (0)
#define PDP_D_DST_BASE_ADDR_LOW_0_WORD_COUNT                               (0x1)
#define PDP_D_DST_BASE_ADDR_LOW_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_LOW_0_RESET_MASK        (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_BASE_ADDR_LOW_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_LOW_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_LOW_0_READ_MASK         (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_BASE_ADDR_LOW_0_WRITE_MASK        (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SHIFT))
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_RANGE                 (31:5)
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_WOFFSET                (0x0)
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DST_BASE_ADDR_HIGH_0
#define PDP_D_DST_BASE_ADDR_HIGH_0                      (_MK_ADDR_CONST(0xd074))
#define PDP_D_DST_BASE_ADDR_HIGH_0_SECURE                                  (0x0)
#define PDP_D_DST_BASE_ADDR_HIGH_0_DUAL                                    (0x0)
#define PDP_D_DST_BASE_ADDR_HIGH_0_SCR                                       (0)
#define PDP_D_DST_BASE_ADDR_HIGH_0_WORD_COUNT                              (0x1)
#define PDP_D_DST_BASE_ADDR_HIGH_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_HIGH_0_RESET_MASK       (_MK_MASK_CONST(0xffffffff))
#define PDP_D_DST_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_HIGH_0_READ_MASK        (_MK_MASK_CONST(0xffffffff))
#define PDP_D_DST_BASE_ADDR_HIGH_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffff))
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SHIFT))
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_RANGE               (31:0)
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_WOFFSET              (0x0)
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DST_LINE_STRIDE_0
#define PDP_D_DST_LINE_STRIDE_0                         (_MK_ADDR_CONST(0xd078))
#define PDP_D_DST_LINE_STRIDE_0_SECURE                                     (0x0)
#define PDP_D_DST_LINE_STRIDE_0_DUAL                                       (0x0)
#define PDP_D_DST_LINE_STRIDE_0_SCR                                          (0)
#define PDP_D_DST_LINE_STRIDE_0_WORD_COUNT                                 (0x1)
#define PDP_D_DST_LINE_STRIDE_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define PDP_D_DST_LINE_STRIDE_0_RESET_MASK          (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_LINE_STRIDE_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define PDP_D_DST_LINE_STRIDE_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define PDP_D_DST_LINE_STRIDE_0_READ_MASK           (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_LINE_STRIDE_0_WRITE_MASK          (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SHIFT       (_MK_SHIFT_CONST(5))
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SHIFT))
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_RANGE                     (31:5)
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_WOFFSET                    (0x0)
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_DEFAULT    (_MK_MASK_CONST(0x0))
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DST_SURFACE_STRIDE_0
#define PDP_D_DST_SURFACE_STRIDE_0                      (_MK_ADDR_CONST(0xd07c))
#define PDP_D_DST_SURFACE_STRIDE_0_SECURE                                  (0x0)
#define PDP_D_DST_SURFACE_STRIDE_0_DUAL                                    (0x0)
#define PDP_D_DST_SURFACE_STRIDE_0_SCR                                       (0)
#define PDP_D_DST_SURFACE_STRIDE_0_WORD_COUNT                              (0x1)
#define PDP_D_DST_SURFACE_STRIDE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_DST_SURFACE_STRIDE_0_RESET_MASK       (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_SURFACE_STRIDE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define PDP_D_DST_SURFACE_STRIDE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_DST_SURFACE_STRIDE_0_READ_MASK        (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_SURFACE_STRIDE_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffe0))
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SHIFT))
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_RANGE               (31:5)
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_WOFFSET              (0x0)
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_DST_RAM_CFG_0
#define PDP_D_DST_RAM_CFG_0                             (_MK_ADDR_CONST(0xd080))
#define PDP_D_DST_RAM_CFG_0_SECURE                                         (0x0)
#define PDP_D_DST_RAM_CFG_0_DUAL                                           (0x0)
#define PDP_D_DST_RAM_CFG_0_SCR                                              (0)
#define PDP_D_DST_RAM_CFG_0_WORD_COUNT                                     (0x1)
#define PDP_D_DST_RAM_CFG_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define PDP_D_DST_RAM_CFG_0_RESET_MASK                     (_MK_MASK_CONST(0x1))
#define PDP_D_DST_RAM_CFG_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_D_DST_RAM_CFG_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define PDP_D_DST_RAM_CFG_0_READ_MASK                      (_MK_MASK_CONST(0x1))
#define PDP_D_DST_RAM_CFG_0_WRITE_MASK                     (_MK_MASK_CONST(0x1))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_SHIFT              (_MK_SHIFT_CONST(0))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_SHIFT))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_RANGE                             (0:0)
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_WOFFSET                           (0x0)
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_DEFAULT           (_MK_MASK_CONST(0x0))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_CV                  (_MK_ENUM_CONST(0))
#define PDP_D_DST_RAM_CFG_0_DST_RAM_TYPE_MC                  (_MK_ENUM_CONST(1))


// Register PDP_D_DATA_FORMAT_0
#define PDP_D_DATA_FORMAT_0                             (_MK_ADDR_CONST(0xd084))
#define PDP_D_DATA_FORMAT_0_SECURE                                         (0x0)
#define PDP_D_DATA_FORMAT_0_DUAL                                           (0x0)
#define PDP_D_DATA_FORMAT_0_SCR                                              (0)
#define PDP_D_DATA_FORMAT_0_WORD_COUNT                                     (0x1)
#define PDP_D_DATA_FORMAT_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_FORMAT_0_RESET_MASK                     (_MK_MASK_CONST(0x3))
#define PDP_D_DATA_FORMAT_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_FORMAT_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_FORMAT_0_READ_MASK                      (_MK_MASK_CONST(0x3))
#define PDP_D_DATA_FORMAT_0_WRITE_MASK                     (_MK_MASK_CONST(0x3))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_SHIFT                (_MK_SHIFT_CONST(0))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_FIELD \
	(_MK_FIELD_CONST(0x3, PDP_D_DATA_FORMAT_0_INPUT_DATA_SHIFT))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_RANGE                               (1:0)
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_WOFFSET                             (0x0)
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_DEFAULT             (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_DEFAULT_MASK        (_MK_MASK_CONST(0x3))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_INT8                  (_MK_ENUM_CONST(0))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_INT16                 (_MK_ENUM_CONST(1))
#define PDP_D_DATA_FORMAT_0_INPUT_DATA_FP16                  (_MK_ENUM_CONST(2))


// Register PDP_D_INF_INPUT_NUM_0
#define PDP_D_INF_INPUT_NUM_0                           (_MK_ADDR_CONST(0xd088))
#define PDP_D_INF_INPUT_NUM_0_SECURE                                       (0x0)
#define PDP_D_INF_INPUT_NUM_0_DUAL                                         (0x0)
#define PDP_D_INF_INPUT_NUM_0_SCR                                            (0)
#define PDP_D_INF_INPUT_NUM_0_WORD_COUNT                                   (0x1)
#define PDP_D_INF_INPUT_NUM_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define PDP_D_INF_INPUT_NUM_0_RESET_MASK            (_MK_MASK_CONST(0xffffffff))
#define PDP_D_INF_INPUT_NUM_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_INF_INPUT_NUM_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define PDP_D_INF_INPUT_NUM_0_READ_MASK             (_MK_MASK_CONST(0xffffffff))
#define PDP_D_INF_INPUT_NUM_0_WRITE_MASK                   (_MK_MASK_CONST(0x0))
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SHIFT           (_MK_SHIFT_CONST(0))
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SHIFT))
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_RANGE                         (31:0)
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_WOFFSET                        (0x0)
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_DEFAULT        (_MK_MASK_CONST(0x0))
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_NAN_INPUT_NUM_0
#define PDP_D_NAN_INPUT_NUM_0                           (_MK_ADDR_CONST(0xd08c))
#define PDP_D_NAN_INPUT_NUM_0_SECURE                                       (0x0)
#define PDP_D_NAN_INPUT_NUM_0_DUAL                                         (0x0)
#define PDP_D_NAN_INPUT_NUM_0_SCR                                            (0)
#define PDP_D_NAN_INPUT_NUM_0_WORD_COUNT                                   (0x1)
#define PDP_D_NAN_INPUT_NUM_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_INPUT_NUM_0_RESET_MASK            (_MK_MASK_CONST(0xffffffff))
#define PDP_D_NAN_INPUT_NUM_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_INPUT_NUM_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_INPUT_NUM_0_READ_MASK             (_MK_MASK_CONST(0xffffffff))
#define PDP_D_NAN_INPUT_NUM_0_WRITE_MASK                   (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SHIFT           (_MK_SHIFT_CONST(0))
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SHIFT))
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_RANGE                         (31:0)
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_WOFFSET                        (0x0)
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_DEFAULT        (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_NAN_OUTPUT_NUM_0
#define PDP_D_NAN_OUTPUT_NUM_0                          (_MK_ADDR_CONST(0xd090))
#define PDP_D_NAN_OUTPUT_NUM_0_SECURE                                      (0x0)
#define PDP_D_NAN_OUTPUT_NUM_0_DUAL                                        (0x0)
#define PDP_D_NAN_OUTPUT_NUM_0_SCR                                           (0)
#define PDP_D_NAN_OUTPUT_NUM_0_WORD_COUNT                                  (0x1)
#define PDP_D_NAN_OUTPUT_NUM_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_OUTPUT_NUM_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define PDP_D_NAN_OUTPUT_NUM_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_OUTPUT_NUM_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_OUTPUT_NUM_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define PDP_D_NAN_OUTPUT_NUM_0_WRITE_MASK                  (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SHIFT         (_MK_SHIFT_CONST(0))
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SHIFT))
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_RANGE                       (31:0)
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_WOFFSET                      (0x0)
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_DEFAULT      (_MK_MASK_CONST(0x0))
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_PERF_ENABLE_0
#define PDP_D_PERF_ENABLE_0                             (_MK_ADDR_CONST(0xd094))
#define PDP_D_PERF_ENABLE_0_SECURE                                         (0x0)
#define PDP_D_PERF_ENABLE_0_DUAL                                           (0x0)
#define PDP_D_PERF_ENABLE_0_SCR                                              (0)
#define PDP_D_PERF_ENABLE_0_WORD_COUNT                                     (0x1)
#define PDP_D_PERF_ENABLE_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_ENABLE_0_RESET_MASK                     (_MK_MASK_CONST(0x1))
#define PDP_D_PERF_ENABLE_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_ENABLE_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_ENABLE_0_READ_MASK                      (_MK_MASK_CONST(0x1))
#define PDP_D_PERF_ENABLE_0_WRITE_MASK                     (_MK_MASK_CONST(0x1))
#define PDP_D_PERF_ENABLE_0_DMA_EN_SHIFT                    (_MK_SHIFT_CONST(0))
#define PDP_D_PERF_ENABLE_0_DMA_EN_FIELD \
	(_MK_FIELD_CONST(0x1, PDP_D_PERF_ENABLE_0_DMA_EN_SHIFT))
#define PDP_D_PERF_ENABLE_0_DMA_EN_RANGE                                   (0:0)
#define PDP_D_PERF_ENABLE_0_DMA_EN_WOFFSET                                 (0x0)
#define PDP_D_PERF_ENABLE_0_DMA_EN_DEFAULT                 (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_ENABLE_0_DMA_EN_DEFAULT_MASK            (_MK_MASK_CONST(0x1))
#define PDP_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_ENABLE_0_DMA_EN_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_ENABLE_0_DMA_EN_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define PDP_D_PERF_ENABLE_0_DMA_EN_INIT_ENUM                           (DISABLE)
#define PDP_D_PERF_ENABLE_0_DMA_EN_DISABLE                   (_MK_ENUM_CONST(0))
#define PDP_D_PERF_ENABLE_0_DMA_EN_ENABLE                    (_MK_ENUM_CONST(1))


// Register PDP_D_PERF_WRITE_STALL_0
#define PDP_D_PERF_WRITE_STALL_0                        (_MK_ADDR_CONST(0xd098))
#define PDP_D_PERF_WRITE_STALL_0_SECURE                                    (0x0)
#define PDP_D_PERF_WRITE_STALL_0_DUAL                                      (0x0)
#define PDP_D_PERF_WRITE_STALL_0_SCR                                         (0)
#define PDP_D_PERF_WRITE_STALL_0_WORD_COUNT                                (0x1)
#define PDP_D_PERF_WRITE_STALL_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_WRITE_STALL_0_RESET_MASK         (_MK_MASK_CONST(0xffffffff))
#define PDP_D_PERF_WRITE_STALL_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_WRITE_STALL_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_WRITE_STALL_0_READ_MASK          (_MK_MASK_CONST(0xffffffff))
#define PDP_D_PERF_WRITE_STALL_0_WRITE_MASK                (_MK_MASK_CONST(0x0))
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SHIFT     (_MK_SHIFT_CONST(0))
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SHIFT))
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_RANGE                   (31:0)
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_WOFFSET                  (0x0)
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define PDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register PDP_D_CYA_0
#define PDP_D_CYA_0                                     (_MK_ADDR_CONST(0xd09c))
#define PDP_D_CYA_0_SECURE                                                 (0x0)
#define PDP_D_CYA_0_DUAL                                                   (0x0)
#define PDP_D_CYA_0_SCR                                                      (0)
#define PDP_D_CYA_0_WORD_COUNT                                             (0x1)
#define PDP_D_CYA_0_RESET_VAL                              (_MK_MASK_CONST(0x0))
#define PDP_D_CYA_0_RESET_MASK                      (_MK_MASK_CONST(0xffffffff))
#define PDP_D_CYA_0_SW_DEFAULT_VAL                         (_MK_MASK_CONST(0x0))
#define PDP_D_CYA_0_SW_DEFAULT_MASK                        (_MK_MASK_CONST(0x0))
#define PDP_D_CYA_0_READ_MASK                       (_MK_MASK_CONST(0xffffffff))
#define PDP_D_CYA_0_WRITE_MASK                      (_MK_MASK_CONST(0xffffffff))
#define PDP_D_CYA_0_CYA_SHIFT                               (_MK_SHIFT_CONST(0))
#define PDP_D_CYA_0_CYA_FIELD \
	(_MK_FIELD_CONST(0xffffffff, PDP_D_CYA_0_CYA_SHIFT))
#define PDP_D_CYA_0_CYA_RANGE                                             (31:0)
#define PDP_D_CYA_0_CYA_WOFFSET                                            (0x0)
#define PDP_D_CYA_0_CYA_DEFAULT                            (_MK_MASK_CONST(0x0))
#define PDP_D_CYA_0_CYA_DEFAULT_MASK                (_MK_MASK_CONST(0xffffffff))
#define PDP_D_CYA_0_CYA_SW_DEFAULT                         (_MK_MASK_CONST(0x0))
#define PDP_D_CYA_0_CYA_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define PDP_D_CYA_0_CYA_PARITY_PROTECTION                  (_MK_MASK_CONST(0x0))
#define PDP_D_CYA_0_CYA_PLATFORM_DEPENDENT                 (_MK_MASK_CONST(0x1))


// Register CDP_RDMA_S_STATUS_0
#define CDP_RDMA_S_STATUS_0                             (_MK_ADDR_CONST(0xe000))
#define CDP_RDMA_S_STATUS_0_SECURE                                         (0x0)
#define CDP_RDMA_S_STATUS_0_DUAL                                           (0x0)
#define CDP_RDMA_S_STATUS_0_SCR                                              (0)
#define CDP_RDMA_S_STATUS_0_WORD_COUNT                                     (0x1)
#define CDP_RDMA_S_STATUS_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_RESET_MASK                 (_MK_MASK_CONST(0x30003))
#define CDP_RDMA_S_STATUS_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_READ_MASK                  (_MK_MASK_CONST(0x30003))
#define CDP_RDMA_S_STATUS_0_WRITE_MASK                     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_0_SHIFT                  (_MK_SHIFT_CONST(0))
#define CDP_RDMA_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, CDP_RDMA_S_STATUS_0_STATUS_0_SHIFT))
#define CDP_RDMA_S_STATUS_0_STATUS_0_RANGE                                 (1:0)
#define CDP_RDMA_S_STATUS_0_STATUS_0_WOFFSET                               (0x0)
#define CDP_RDMA_S_STATUS_0_STATUS_0_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_0_DEFAULT_MASK          (_MK_MASK_CONST(0x3))
#define CDP_RDMA_S_STATUS_0_STATUS_0_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_0_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define CDP_RDMA_S_STATUS_0_STATUS_0_INIT_ENUM                            (IDLE)
#define CDP_RDMA_S_STATUS_0_STATUS_0_IDLE                    (_MK_ENUM_CONST(0))
#define CDP_RDMA_S_STATUS_0_STATUS_0_RUNNING                 (_MK_ENUM_CONST(1))
#define CDP_RDMA_S_STATUS_0_STATUS_0_PENDING                 (_MK_ENUM_CONST(2))

#define CDP_RDMA_S_STATUS_0_STATUS_1_SHIFT                 (_MK_SHIFT_CONST(16))
#define CDP_RDMA_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, CDP_RDMA_S_STATUS_0_STATUS_1_SHIFT))
#define CDP_RDMA_S_STATUS_0_STATUS_1_RANGE                               (17:16)
#define CDP_RDMA_S_STATUS_0_STATUS_1_WOFFSET                               (0x0)
#define CDP_RDMA_S_STATUS_0_STATUS_1_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_1_DEFAULT_MASK          (_MK_MASK_CONST(0x3))
#define CDP_RDMA_S_STATUS_0_STATUS_1_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_1_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define CDP_RDMA_S_STATUS_0_STATUS_1_INIT_ENUM                            (IDLE)
#define CDP_RDMA_S_STATUS_0_STATUS_1_IDLE                    (_MK_ENUM_CONST(0))
#define CDP_RDMA_S_STATUS_0_STATUS_1_RUNNING                 (_MK_ENUM_CONST(1))
#define CDP_RDMA_S_STATUS_0_STATUS_1_PENDING                 (_MK_ENUM_CONST(2))


// Register CDP_RDMA_S_POINTER_0
#define CDP_RDMA_S_POINTER_0                            (_MK_ADDR_CONST(0xe004))
#define CDP_RDMA_S_POINTER_0_SECURE                                        (0x0)
#define CDP_RDMA_S_POINTER_0_DUAL                                          (0x0)
#define CDP_RDMA_S_POINTER_0_SCR                                             (0)
#define CDP_RDMA_S_POINTER_0_WORD_COUNT                                    (0x1)
#define CDP_RDMA_S_POINTER_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_RESET_MASK                (_MK_MASK_CONST(0x10001))
#define CDP_RDMA_S_POINTER_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_READ_MASK                 (_MK_MASK_CONST(0x10001))
#define CDP_RDMA_S_POINTER_0_WRITE_MASK                    (_MK_MASK_CONST(0x1))
#define CDP_RDMA_S_POINTER_0_PRODUCER_SHIFT                 (_MK_SHIFT_CONST(0))
#define CDP_RDMA_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_RDMA_S_POINTER_0_PRODUCER_SHIFT))
#define CDP_RDMA_S_POINTER_0_PRODUCER_RANGE                                (0:0)
#define CDP_RDMA_S_POINTER_0_PRODUCER_WOFFSET                              (0x0)
#define CDP_RDMA_S_POINTER_0_PRODUCER_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_PRODUCER_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define CDP_RDMA_S_POINTER_0_PRODUCER_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_PRODUCER_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_S_POINTER_0_PRODUCER_INIT_ENUM                        (GROUP_0)
#define CDP_RDMA_S_POINTER_0_PRODUCER_GROUP_0                (_MK_ENUM_CONST(0))
#define CDP_RDMA_S_POINTER_0_PRODUCER_GROUP_1                (_MK_ENUM_CONST(1))

#define CDP_RDMA_S_POINTER_0_CONSUMER_SHIFT                (_MK_SHIFT_CONST(16))
#define CDP_RDMA_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_RDMA_S_POINTER_0_CONSUMER_SHIFT))
#define CDP_RDMA_S_POINTER_0_CONSUMER_RANGE                              (16:16)
#define CDP_RDMA_S_POINTER_0_CONSUMER_WOFFSET                              (0x0)
#define CDP_RDMA_S_POINTER_0_CONSUMER_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_CONSUMER_DEFAULT_MASK         (_MK_MASK_CONST(0x1))
#define CDP_RDMA_S_POINTER_0_CONSUMER_SW_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_CONSUMER_PARITY_PROTECTION    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_S_POINTER_0_CONSUMER_INIT_ENUM                        (GROUP_0)
#define CDP_RDMA_S_POINTER_0_CONSUMER_GROUP_0                (_MK_ENUM_CONST(0))
#define CDP_RDMA_S_POINTER_0_CONSUMER_GROUP_1                (_MK_ENUM_CONST(1))


// Register CDP_RDMA_D_OP_ENABLE_0
#define CDP_RDMA_D_OP_ENABLE_0                          (_MK_ADDR_CONST(0xe008))
#define CDP_RDMA_D_OP_ENABLE_0_SECURE                                      (0x0)
#define CDP_RDMA_D_OP_ENABLE_0_DUAL                                        (0x0)
#define CDP_RDMA_D_OP_ENABLE_0_SCR                                           (0)
#define CDP_RDMA_D_OP_ENABLE_0_WORD_COUNT                                  (0x1)
#define CDP_RDMA_D_OP_ENABLE_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OP_ENABLE_0_RESET_MASK                  (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_OP_ENABLE_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OP_ENABLE_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OP_ENABLE_0_READ_MASK                   (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_OP_ENABLE_0_WRITE_MASK                  (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_SHIFT                  (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_RDMA_D_OP_ENABLE_0_OP_EN_SHIFT))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_RANGE                                 (0:0)
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_WOFFSET                               (0x0)
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_DEFAULT               (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK          (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_SW_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT    (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_INIT_ENUM                         (DISABLE)
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_DISABLE                 (_MK_ENUM_CONST(0))
#define CDP_RDMA_D_OP_ENABLE_0_OP_EN_ENABLE                  (_MK_ENUM_CONST(1))


// Register CDP_RDMA_D_DATA_CUBE_WIDTH_0
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0                    (_MK_ADDR_CONST(0xe00c))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_SECURE                                (0x0)
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_DUAL                                  (0x0)
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_SCR                                     (0)
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WORD_COUNT                            (0x1)
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_RESET_MASK         (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_READ_MASK          (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WRITE_MASK         (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_SHIFT            (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_FIELD \
	(_MK_FIELD_CONST(0x1fff, CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_SHIFT))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_RANGE                          (12:0)
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_WOFFSET                         (0x0)
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_WIDTH_0_WIDTH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_RDMA_D_DATA_CUBE_HEIGHT_0
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0                   (_MK_ADDR_CONST(0xe010))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_SECURE                               (0x0)
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_DUAL                                 (0x0)
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_SCR                                    (0)
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_WORD_COUNT                           (0x1)
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_RESET_VAL            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_RESET_MASK        (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_SW_DEFAULT_VAL       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_SW_DEFAULT_MASK      (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_READ_MASK         (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_WRITE_MASK        (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_SHIFT          (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_FIELD \
	(_MK_FIELD_CONST(0x1fff, CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_SHIFT))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_RANGE                        (12:0)
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_WOFFSET                       (0x0)
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_HEIGHT_0_HEIGHT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_RDMA_D_DATA_CUBE_CHANNEL_0
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0                  (_MK_ADDR_CONST(0xe014))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_SECURE                              (0x0)
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_DUAL                                (0x0)
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_SCR                                   (0)
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_WORD_COUNT                          (0x1)
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_RESET_MASK       (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_READ_MASK        (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_WRITE_MASK       (_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_SHIFT        (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_FIELD \
	(_MK_FIELD_CONST(0x1fff, \
	CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_SHIFT))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_RANGE                      (12:0)
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_WOFFSET                     (0x0)
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1fff))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_CUBE_CHANNEL_0_CHANNEL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_RDMA_D_SRC_BASE_ADDR_LOW_0
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0                  (_MK_ADDR_CONST(0xe018))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SECURE                              (0x0)
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_DUAL                                (0x0)
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SCR                                   (0)
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_WORD_COUNT                          (0x1)
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_RESET_VAL           (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SW_DEFAULT_VAL      (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_READ_MASK    (_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SHIFT))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_RANGE            (31:5)
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_WOFFSET           (0x0)
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_LOW_0_SRC_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0                 (_MK_ADDR_CONST(0xe01c))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SECURE                             (0x0)
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_DUAL                               (0x0)
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SCR                                  (0)
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_WORD_COUNT                         (0x1)
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SHIFT))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_RANGE          (31:0)
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_WOFFSET         (0x0)
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0_SRC_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_RDMA_D_SRC_LINE_STRIDE_0
#define CDP_RDMA_D_SRC_LINE_STRIDE_0                    (_MK_ADDR_CONST(0xe020))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SECURE                                (0x0)
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_DUAL                                  (0x0)
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SCR                                     (0)
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_WORD_COUNT                            (0x1)
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_RESET_MASK     (_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_READ_MASK      (_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_WRITE_MASK     (_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SHIFT))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_RANGE                (31:5)
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_WOFFSET               (0x0)
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_LINE_STRIDE_0_SRC_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_RDMA_D_SRC_SURFACE_STRIDE_0
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0                 (_MK_ADDR_CONST(0xe024))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SECURE                             (0x0)
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_DUAL                               (0x0)
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SCR                                  (0)
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_WORD_COUNT                         (0x1)
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_RESET_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_READ_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_WRITE_MASK \
	(_MK_MASK_CONST(0xffffffe0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SHIFT))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_RANGE          (31:5)
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_WOFFSET         (0x0)
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_SURFACE_STRIDE_0_SRC_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_RDMA_D_SRC_DMA_CFG_0
#define CDP_RDMA_D_SRC_DMA_CFG_0                        (_MK_ADDR_CONST(0xe028))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SECURE                                    (0x0)
#define CDP_RDMA_D_SRC_DMA_CFG_0_DUAL                                      (0x0)
#define CDP_RDMA_D_SRC_DMA_CFG_0_SCR                                         (0)
#define CDP_RDMA_D_SRC_DMA_CFG_0_WORD_COUNT                                (0x1)
#define CDP_RDMA_D_SRC_DMA_CFG_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_RESET_MASK                (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_READ_MASK                 (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_DMA_CFG_0_WRITE_MASK                (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_SHIFT))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_RANGE                        (0:0)
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_WOFFSET                      (0x0)
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_CV             (_MK_ENUM_CONST(0))
#define CDP_RDMA_D_SRC_DMA_CFG_0_SRC_RAM_TYPE_MC             (_MK_ENUM_CONST(1))


// Register CDP_RDMA_D_SRC_COMPRESSION_EN_0
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0                 (_MK_ADDR_CONST(0xe02c))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SECURE                             (0x0)
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_DUAL                               (0x0)
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SCR                                  (0)
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_WORD_COUNT                         (0x1)
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_RESET_VAL          (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_RESET_MASK         (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SW_DEFAULT_VAL     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_READ_MASK          (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_WRITE_MASK         (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_FIELD \
	(_MK_FIELD_CONST(0x1, \
	CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_SHIFT))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_RANGE           (0:0)
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_WOFFSET         (0x0)
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_DISABLE \
	(_MK_ENUM_CONST(0))
#define CDP_RDMA_D_SRC_COMPRESSION_EN_0_SRC_COMPRESSION_EN_ENABLE \
	(_MK_ENUM_CONST(1))


// Register CDP_RDMA_D_OPERATION_MODE_0
#define CDP_RDMA_D_OPERATION_MODE_0                     (_MK_ADDR_CONST(0xe030))
#define CDP_RDMA_D_OPERATION_MODE_0_SECURE                                 (0x0)
#define CDP_RDMA_D_OPERATION_MODE_0_DUAL                                   (0x0)
#define CDP_RDMA_D_OPERATION_MODE_0_SCR                                      (0)
#define CDP_RDMA_D_OPERATION_MODE_0_WORD_COUNT                             (0x1)
#define CDP_RDMA_D_OPERATION_MODE_0_RESET_VAL              (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OPERATION_MODE_0_RESET_MASK             (_MK_MASK_CONST(0x3))
#define CDP_RDMA_D_OPERATION_MODE_0_SW_DEFAULT_VAL         (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OPERATION_MODE_0_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OPERATION_MODE_0_READ_MASK              (_MK_MASK_CONST(0x3))
#define CDP_RDMA_D_OPERATION_MODE_0_WRITE_MASK             (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_SHIFT    (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_FIELD \
	(_MK_FIELD_CONST(0x3, \
	CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_SHIFT))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_RANGE                   (1:0)
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_WOFFSET                 (0x0)
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_READPHILE \
	(_MK_ENUM_CONST(0))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_WRITEPHILE \
	(_MK_ENUM_CONST(1))
#define CDP_RDMA_D_OPERATION_MODE_0_OPERATION_MODE_ORDINARY \
	(_MK_ENUM_CONST(2))


// Register CDP_RDMA_D_DATA_FORMAT_0
#define CDP_RDMA_D_DATA_FORMAT_0                        (_MK_ADDR_CONST(0xe034))
#define CDP_RDMA_D_DATA_FORMAT_0_SECURE                                    (0x0)
#define CDP_RDMA_D_DATA_FORMAT_0_DUAL                                      (0x0)
#define CDP_RDMA_D_DATA_FORMAT_0_SCR                                         (0)
#define CDP_RDMA_D_DATA_FORMAT_0_WORD_COUNT                                (0x1)
#define CDP_RDMA_D_DATA_FORMAT_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_FORMAT_0_RESET_MASK                (_MK_MASK_CONST(0x3))
#define CDP_RDMA_D_DATA_FORMAT_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_FORMAT_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_FORMAT_0_READ_MASK                 (_MK_MASK_CONST(0x3))
#define CDP_RDMA_D_DATA_FORMAT_0_WRITE_MASK                (_MK_MASK_CONST(0x3))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_SHIFT           (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_FIELD \
	(_MK_FIELD_CONST(0x3, CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_SHIFT))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_RANGE                          (1:0)
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_WOFFSET                        (0x0)
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_INT8             (_MK_ENUM_CONST(0))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_INT16            (_MK_ENUM_CONST(1))
#define CDP_RDMA_D_DATA_FORMAT_0_INPUT_DATA_FP16             (_MK_ENUM_CONST(2))


// Register CDP_RDMA_D_PERF_ENABLE_0
#define CDP_RDMA_D_PERF_ENABLE_0                        (_MK_ADDR_CONST(0xe038))
#define CDP_RDMA_D_PERF_ENABLE_0_SECURE                                    (0x0)
#define CDP_RDMA_D_PERF_ENABLE_0_DUAL                                      (0x0)
#define CDP_RDMA_D_PERF_ENABLE_0_SCR                                         (0)
#define CDP_RDMA_D_PERF_ENABLE_0_WORD_COUNT                                (0x1)
#define CDP_RDMA_D_PERF_ENABLE_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_ENABLE_0_RESET_MASK                (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_PERF_ENABLE_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_ENABLE_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_ENABLE_0_READ_MASK                 (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_PERF_ENABLE_0_WRITE_MASK                (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_SHIFT               (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_SHIFT))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_RANGE                              (0:0)
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_WOFFSET                            (0x0)
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_INIT_ENUM                      (DISABLE)
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_DISABLE              (_MK_ENUM_CONST(0))
#define CDP_RDMA_D_PERF_ENABLE_0_DMA_EN_ENABLE               (_MK_ENUM_CONST(1))


// Register CDP_RDMA_D_PERF_READ_STALL_0
#define CDP_RDMA_D_PERF_READ_STALL_0                    (_MK_ADDR_CONST(0xe03c))
#define CDP_RDMA_D_PERF_READ_STALL_0_SECURE                                (0x0)
#define CDP_RDMA_D_PERF_READ_STALL_0_DUAL                                  (0x0)
#define CDP_RDMA_D_PERF_READ_STALL_0_SCR                                     (0)
#define CDP_RDMA_D_PERF_READ_STALL_0_WORD_COUNT                            (0x1)
#define CDP_RDMA_D_PERF_READ_STALL_0_RESET_VAL             (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_READ_STALL_0_RESET_MASK     (_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_PERF_READ_STALL_0_SW_DEFAULT_VAL        (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_READ_STALL_0_SW_DEFAULT_MASK       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_READ_STALL_0_READ_MASK      (_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_PERF_READ_STALL_0_WRITE_MASK            (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_SHIFT))
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_RANGE                (31:0)
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_WOFFSET               (0x0)
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_PERF_READ_STALL_0_PERF_READ_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_RDMA_D_CYA_0
#define CDP_RDMA_D_CYA_0                                (_MK_ADDR_CONST(0xe040))
#define CDP_RDMA_D_CYA_0_SECURE                                            (0x0)
#define CDP_RDMA_D_CYA_0_DUAL                                              (0x0)
#define CDP_RDMA_D_CYA_0_SCR                                                 (0)
#define CDP_RDMA_D_CYA_0_WORD_COUNT                                        (0x1)
#define CDP_RDMA_D_CYA_0_RESET_VAL                         (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_CYA_0_RESET_MASK                 (_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_CYA_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_CYA_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_CYA_0_READ_MASK                  (_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_CYA_0_WRITE_MASK                 (_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_CYA_0_CYA_SHIFT                          (_MK_SHIFT_CONST(0))
#define CDP_RDMA_D_CYA_0_CYA_FIELD \
	(_MK_FIELD_CONST(0xffffffff, CDP_RDMA_D_CYA_0_CYA_SHIFT))
#define CDP_RDMA_D_CYA_0_CYA_RANGE                                        (31:0)
#define CDP_RDMA_D_CYA_0_CYA_WOFFSET                                       (0x0)
#define CDP_RDMA_D_CYA_0_CYA_DEFAULT                       (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_CYA_0_CYA_DEFAULT_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_RDMA_D_CYA_0_CYA_SW_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_CYA_0_CYA_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_CYA_0_CYA_PARITY_PROTECTION             (_MK_MASK_CONST(0x0))
#define CDP_RDMA_D_CYA_0_CYA_PLATFORM_DEPENDENT            (_MK_MASK_CONST(0x1))


// Register CDP_S_STATUS_0
#define CDP_S_STATUS_0                                  (_MK_ADDR_CONST(0xf000))
#define CDP_S_STATUS_0_SECURE                                              (0x0)
#define CDP_S_STATUS_0_DUAL                                                (0x0)
#define CDP_S_STATUS_0_SCR                                                   (0)
#define CDP_S_STATUS_0_WORD_COUNT                                          (0x1)
#define CDP_S_STATUS_0_RESET_VAL                           (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_RESET_MASK                      (_MK_MASK_CONST(0x30003))
#define CDP_S_STATUS_0_SW_DEFAULT_VAL                      (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_SW_DEFAULT_MASK                     (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_READ_MASK                       (_MK_MASK_CONST(0x30003))
#define CDP_S_STATUS_0_WRITE_MASK                          (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_0_SHIFT                       (_MK_SHIFT_CONST(0))
#define CDP_S_STATUS_0_STATUS_0_FIELD \
	(_MK_FIELD_CONST(0x3, CDP_S_STATUS_0_STATUS_0_SHIFT))
#define CDP_S_STATUS_0_STATUS_0_RANGE                                      (1:0)
#define CDP_S_STATUS_0_STATUS_0_WOFFSET                                    (0x0)
#define CDP_S_STATUS_0_STATUS_0_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_0_DEFAULT_MASK               (_MK_MASK_CONST(0x3))
#define CDP_S_STATUS_0_STATUS_0_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_0_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_0_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define CDP_S_STATUS_0_STATUS_0_INIT_ENUM                                 (IDLE)
#define CDP_S_STATUS_0_STATUS_0_IDLE                         (_MK_ENUM_CONST(0))
#define CDP_S_STATUS_0_STATUS_0_RUNNING                      (_MK_ENUM_CONST(1))
#define CDP_S_STATUS_0_STATUS_0_PENDING                      (_MK_ENUM_CONST(2))

#define CDP_S_STATUS_0_STATUS_1_SHIFT                      (_MK_SHIFT_CONST(16))
#define CDP_S_STATUS_0_STATUS_1_FIELD \
	(_MK_FIELD_CONST(0x3, CDP_S_STATUS_0_STATUS_1_SHIFT))
#define CDP_S_STATUS_0_STATUS_1_RANGE                                    (17:16)
#define CDP_S_STATUS_0_STATUS_1_WOFFSET                                    (0x0)
#define CDP_S_STATUS_0_STATUS_1_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_1_DEFAULT_MASK               (_MK_MASK_CONST(0x3))
#define CDP_S_STATUS_0_STATUS_1_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_1_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_1_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CDP_S_STATUS_0_STATUS_1_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define CDP_S_STATUS_0_STATUS_1_INIT_ENUM                                 (IDLE)
#define CDP_S_STATUS_0_STATUS_1_IDLE                         (_MK_ENUM_CONST(0))
#define CDP_S_STATUS_0_STATUS_1_RUNNING                      (_MK_ENUM_CONST(1))
#define CDP_S_STATUS_0_STATUS_1_PENDING                      (_MK_ENUM_CONST(2))


// Register CDP_S_POINTER_0
#define CDP_S_POINTER_0                                 (_MK_ADDR_CONST(0xf004))
#define CDP_S_POINTER_0_SECURE                                             (0x0)
#define CDP_S_POINTER_0_DUAL                                               (0x0)
#define CDP_S_POINTER_0_SCR                                                  (0)
#define CDP_S_POINTER_0_WORD_COUNT                                         (0x1)
#define CDP_S_POINTER_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_RESET_MASK                     (_MK_MASK_CONST(0x10001))
#define CDP_S_POINTER_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_READ_MASK                      (_MK_MASK_CONST(0x10001))
#define CDP_S_POINTER_0_WRITE_MASK                         (_MK_MASK_CONST(0x1))
#define CDP_S_POINTER_0_PRODUCER_SHIFT                      (_MK_SHIFT_CONST(0))
#define CDP_S_POINTER_0_PRODUCER_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_S_POINTER_0_PRODUCER_SHIFT))
#define CDP_S_POINTER_0_PRODUCER_RANGE                                     (0:0)
#define CDP_S_POINTER_0_PRODUCER_WOFFSET                                   (0x0)
#define CDP_S_POINTER_0_PRODUCER_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_PRODUCER_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define CDP_S_POINTER_0_PRODUCER_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_PRODUCER_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_PRODUCER_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_PRODUCER_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CDP_S_POINTER_0_PRODUCER_INIT_ENUM                             (GROUP_0)
#define CDP_S_POINTER_0_PRODUCER_GROUP_0                     (_MK_ENUM_CONST(0))
#define CDP_S_POINTER_0_PRODUCER_GROUP_1                     (_MK_ENUM_CONST(1))

#define CDP_S_POINTER_0_CONSUMER_SHIFT                     (_MK_SHIFT_CONST(16))
#define CDP_S_POINTER_0_CONSUMER_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_S_POINTER_0_CONSUMER_SHIFT))
#define CDP_S_POINTER_0_CONSUMER_RANGE                                   (16:16)
#define CDP_S_POINTER_0_CONSUMER_WOFFSET                                   (0x0)
#define CDP_S_POINTER_0_CONSUMER_DEFAULT                   (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_CONSUMER_DEFAULT_MASK              (_MK_MASK_CONST(0x1))
#define CDP_S_POINTER_0_CONSUMER_SW_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_CONSUMER_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_CONSUMER_PARITY_PROTECTION         (_MK_MASK_CONST(0x0))
#define CDP_S_POINTER_0_CONSUMER_PLATFORM_DEPENDENT        (_MK_MASK_CONST(0x1))
#define CDP_S_POINTER_0_CONSUMER_INIT_ENUM                             (GROUP_0)
#define CDP_S_POINTER_0_CONSUMER_GROUP_0                     (_MK_ENUM_CONST(0))
#define CDP_S_POINTER_0_CONSUMER_GROUP_1                     (_MK_ENUM_CONST(1))


// Register CDP_S_LUT_ACCESS_CFG_0
#define CDP_S_LUT_ACCESS_CFG_0                          (_MK_ADDR_CONST(0xf008))
#define CDP_S_LUT_ACCESS_CFG_0_SECURE                                      (0x0)
#define CDP_S_LUT_ACCESS_CFG_0_DUAL                                        (0x0)
#define CDP_S_LUT_ACCESS_CFG_0_SCR                                           (0)
#define CDP_S_LUT_ACCESS_CFG_0_WORD_COUNT                                  (0x1)
#define CDP_S_LUT_ACCESS_CFG_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_RESET_MASK              (_MK_MASK_CONST(0x303ff))
#define CDP_S_LUT_ACCESS_CFG_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_READ_MASK               (_MK_MASK_CONST(0x303ff))
#define CDP_S_LUT_ACCESS_CFG_0_WRITE_MASK              (_MK_MASK_CONST(0x303ff))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SHIFT               (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_FIELD \
	(_MK_FIELD_CONST(0x3ff, CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SHIFT))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_RANGE                              (9:0)
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_WOFFSET                            (0x0)
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_DEFAULT_MASK     (_MK_MASK_CONST(0x3ff))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SHIFT          (_MK_SHIFT_CONST(16))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SHIFT))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_RANGE                        (16:16)
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_WOFFSET                        (0x0)
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_LE               (_MK_ENUM_CONST(0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_LO               (_MK_ENUM_CONST(1))

#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SHIFT       (_MK_SHIFT_CONST(17))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SHIFT))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_RANGE                     (17:17)
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_WOFFSET                     (0x0)
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_READ          (_MK_ENUM_CONST(0))
#define CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_WRITE         (_MK_ENUM_CONST(1))


// Register CDP_S_LUT_ACCESS_DATA_0
#define CDP_S_LUT_ACCESS_DATA_0                         (_MK_ADDR_CONST(0xf00c))
#define CDP_S_LUT_ACCESS_DATA_0_SECURE                                     (0x0)
#define CDP_S_LUT_ACCESS_DATA_0_DUAL                                       (0x0)
#define CDP_S_LUT_ACCESS_DATA_0_SCR                                          (0)
#define CDP_S_LUT_ACCESS_DATA_0_WORD_COUNT                                 (0x1)
#define CDP_S_LUT_ACCESS_DATA_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_DATA_0_RESET_MASK              (_MK_MASK_CONST(0xffff))
#define CDP_S_LUT_ACCESS_DATA_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_DATA_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_DATA_0_READ_MASK               (_MK_MASK_CONST(0xffff))
#define CDP_S_LUT_ACCESS_DATA_0_WRITE_MASK              (_MK_MASK_CONST(0xffff))
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SHIFT              (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_FIELD \
	(_MK_FIELD_CONST(0xffff, CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SHIFT))
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_RANGE                            (15:0)
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_WOFFSET                           (0x0)
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_CFG_0
#define CDP_S_LUT_CFG_0                                 (_MK_ADDR_CONST(0xf010))
#define CDP_S_LUT_CFG_0_SECURE                                             (0x0)
#define CDP_S_LUT_CFG_0_DUAL                                               (0x0)
#define CDP_S_LUT_CFG_0_SCR                                                  (0)
#define CDP_S_LUT_CFG_0_WORD_COUNT                                         (0x1)
#define CDP_S_LUT_CFG_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_RESET_MASK                        (_MK_MASK_CONST(0x71))
#define CDP_S_LUT_CFG_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_READ_MASK                         (_MK_MASK_CONST(0x71))
#define CDP_S_LUT_CFG_0_WRITE_MASK                        (_MK_MASK_CONST(0x71))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SHIFT               (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SHIFT))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_RANGE                              (0:0)
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_WOFFSET                            (0x0)
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_DEFAULT            (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_DEFAULT_MASK       (_MK_MASK_CONST(0x1))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_EXPONENT             (_MK_ENUM_CONST(0))
#define CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_LINEAR               (_MK_ENUM_CONST(1))

#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SHIFT            (_MK_SHIFT_CONST(4))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SHIFT))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_RANGE                           (4:4)
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_WOFFSET                         (0x0)
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_DEFAULT_MASK    (_MK_MASK_CONST(0x1))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_LE                (_MK_ENUM_CONST(0))
#define CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_LO                (_MK_ENUM_CONST(1))

#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SHIFT            (_MK_SHIFT_CONST(5))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SHIFT))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_RANGE                           (5:5)
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_WOFFSET                         (0x0)
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_DEFAULT_MASK    (_MK_MASK_CONST(0x1))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_LE                (_MK_ENUM_CONST(0))
#define CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_LO                (_MK_ENUM_CONST(1))

#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SHIFT           (_MK_SHIFT_CONST(6))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SHIFT))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_RANGE                          (6:6)
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_WOFFSET                        (0x0)
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_LE               (_MK_ENUM_CONST(0))
#define CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_LO               (_MK_ENUM_CONST(1))


// Register CDP_S_LUT_INFO_0
#define CDP_S_LUT_INFO_0                                (_MK_ADDR_CONST(0xf014))
#define CDP_S_LUT_INFO_0_SECURE                                            (0x0)
#define CDP_S_LUT_INFO_0_DUAL                                              (0x0)
#define CDP_S_LUT_INFO_0_SCR                                                 (0)
#define CDP_S_LUT_INFO_0_WORD_COUNT                                        (0x1)
#define CDP_S_LUT_INFO_0_RESET_VAL                         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_RESET_MASK                   (_MK_MASK_CONST(0xffffff))
#define CDP_S_LUT_INFO_0_SW_DEFAULT_VAL                    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_SW_DEFAULT_MASK                   (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_READ_MASK                    (_MK_MASK_CONST(0xffffff))
#define CDP_S_LUT_INFO_0_WRITE_MASK                   (_MK_MASK_CONST(0xffffff))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SHIFT          (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_FIELD \
	(_MK_FIELD_CONST(0xff, CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SHIFT))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_RANGE                         (7:0)
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_WOFFSET                       (0x0)
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SHIFT          (_MK_SHIFT_CONST(8))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_FIELD \
	(_MK_FIELD_CONST(0xff, CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SHIFT))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_RANGE                        (15:8)
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_WOFFSET                       (0x0)
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SHIFT         (_MK_SHIFT_CONST(16))
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_FIELD \
	(_MK_FIELD_CONST(0xff, CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SHIFT))
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_RANGE                       (23:16)
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_WOFFSET                       (0x0)
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xff))
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SW_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LE_START_LOW_0
#define CDP_S_LUT_LE_START_LOW_0                        (_MK_ADDR_CONST(0xf018))
#define CDP_S_LUT_LE_START_LOW_0_SECURE                                    (0x0)
#define CDP_S_LUT_LE_START_LOW_0_DUAL                                      (0x0)
#define CDP_S_LUT_LE_START_LOW_0_SCR                                         (0)
#define CDP_S_LUT_LE_START_LOW_0_WORD_COUNT                                (0x1)
#define CDP_S_LUT_LE_START_LOW_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_LOW_0_RESET_MASK         (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_START_LOW_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_LOW_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_LOW_0_READ_MASK          (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_START_LOW_0_WRITE_MASK         (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_SHIFT     (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_SHIFT))
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_RANGE                   (31:0)
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_WOFFSET                  (0x0)
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LE_START_HIGH_0
#define CDP_S_LUT_LE_START_HIGH_0                       (_MK_ADDR_CONST(0xf01c))
#define CDP_S_LUT_LE_START_HIGH_0_SECURE                                   (0x0)
#define CDP_S_LUT_LE_START_HIGH_0_DUAL                                     (0x0)
#define CDP_S_LUT_LE_START_HIGH_0_SCR                                        (0)
#define CDP_S_LUT_LE_START_HIGH_0_WORD_COUNT                               (0x1)
#define CDP_S_LUT_LE_START_HIGH_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_HIGH_0_RESET_MASK              (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LE_START_HIGH_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_HIGH_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_HIGH_0_READ_MASK               (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LE_START_HIGH_0_WRITE_MASK              (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_FIELD \
	(_MK_FIELD_CONST(0x3f, \
	CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_SHIFT))
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_RANGE                  (5:0)
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_WOFFSET                (0x0)
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LE_END_LOW_0
#define CDP_S_LUT_LE_END_LOW_0                          (_MK_ADDR_CONST(0xf020))
#define CDP_S_LUT_LE_END_LOW_0_SECURE                                      (0x0)
#define CDP_S_LUT_LE_END_LOW_0_DUAL                                        (0x0)
#define CDP_S_LUT_LE_END_LOW_0_SCR                                           (0)
#define CDP_S_LUT_LE_END_LOW_0_WORD_COUNT                                  (0x1)
#define CDP_S_LUT_LE_END_LOW_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_LOW_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_END_LOW_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_LOW_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_LOW_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_END_LOW_0_WRITE_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_SHIFT))
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_RANGE                       (31:0)
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_WOFFSET                      (0x0)
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LE_END_HIGH_0
#define CDP_S_LUT_LE_END_HIGH_0                         (_MK_ADDR_CONST(0xf024))
#define CDP_S_LUT_LE_END_HIGH_0_SECURE                                     (0x0)
#define CDP_S_LUT_LE_END_HIGH_0_DUAL                                       (0x0)
#define CDP_S_LUT_LE_END_HIGH_0_SCR                                          (0)
#define CDP_S_LUT_LE_END_HIGH_0_WORD_COUNT                                 (0x1)
#define CDP_S_LUT_LE_END_HIGH_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_HIGH_0_RESET_MASK                (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LE_END_HIGH_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_HIGH_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_HIGH_0_READ_MASK                 (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LE_END_HIGH_0_WRITE_MASK                (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_SHIFT       (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_FIELD \
	(_MK_FIELD_CONST(0x3f, \
	CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_SHIFT))
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_RANGE                      (5:0)
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_WOFFSET                    (0x0)
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LO_START_LOW_0
#define CDP_S_LUT_LO_START_LOW_0                        (_MK_ADDR_CONST(0xf028))
#define CDP_S_LUT_LO_START_LOW_0_SECURE                                    (0x0)
#define CDP_S_LUT_LO_START_LOW_0_DUAL                                      (0x0)
#define CDP_S_LUT_LO_START_LOW_0_SCR                                         (0)
#define CDP_S_LUT_LO_START_LOW_0_WORD_COUNT                                (0x1)
#define CDP_S_LUT_LO_START_LOW_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_LOW_0_RESET_MASK         (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_START_LOW_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_LOW_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_LOW_0_READ_MASK          (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_START_LOW_0_WRITE_MASK         (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_SHIFT     (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_SHIFT))
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_RANGE                   (31:0)
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_WOFFSET                  (0x0)
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LO_START_HIGH_0
#define CDP_S_LUT_LO_START_HIGH_0                       (_MK_ADDR_CONST(0xf02c))
#define CDP_S_LUT_LO_START_HIGH_0_SECURE                                   (0x0)
#define CDP_S_LUT_LO_START_HIGH_0_DUAL                                     (0x0)
#define CDP_S_LUT_LO_START_HIGH_0_SCR                                        (0)
#define CDP_S_LUT_LO_START_HIGH_0_WORD_COUNT                               (0x1)
#define CDP_S_LUT_LO_START_HIGH_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_HIGH_0_RESET_MASK              (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LO_START_HIGH_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_HIGH_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_HIGH_0_READ_MASK               (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LO_START_HIGH_0_WRITE_MASK              (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_FIELD \
	(_MK_FIELD_CONST(0x3f, \
	CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_SHIFT))
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_RANGE                  (5:0)
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_WOFFSET                (0x0)
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LO_END_LOW_0
#define CDP_S_LUT_LO_END_LOW_0                          (_MK_ADDR_CONST(0xf030))
#define CDP_S_LUT_LO_END_LOW_0_SECURE                                      (0x0)
#define CDP_S_LUT_LO_END_LOW_0_DUAL                                        (0x0)
#define CDP_S_LUT_LO_END_LOW_0_SCR                                           (0)
#define CDP_S_LUT_LO_END_LOW_0_WORD_COUNT                                  (0x1)
#define CDP_S_LUT_LO_END_LOW_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_LOW_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_END_LOW_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_LOW_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_LOW_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_END_LOW_0_WRITE_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_SHIFT))
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_RANGE                       (31:0)
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_WOFFSET                      (0x0)
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LO_END_HIGH_0
#define CDP_S_LUT_LO_END_HIGH_0                         (_MK_ADDR_CONST(0xf034))
#define CDP_S_LUT_LO_END_HIGH_0_SECURE                                     (0x0)
#define CDP_S_LUT_LO_END_HIGH_0_DUAL                                       (0x0)
#define CDP_S_LUT_LO_END_HIGH_0_SCR                                          (0)
#define CDP_S_LUT_LO_END_HIGH_0_WORD_COUNT                                 (0x1)
#define CDP_S_LUT_LO_END_HIGH_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_HIGH_0_RESET_MASK                (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LO_END_HIGH_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_HIGH_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_HIGH_0_READ_MASK                 (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LO_END_HIGH_0_WRITE_MASK                (_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_SHIFT       (_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_FIELD \
	(_MK_FIELD_CONST(0x3f, \
	CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_SHIFT))
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_RANGE                      (5:0)
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_WOFFSET                    (0x0)
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LE_SLOPE_SCALE_0
#define CDP_S_LUT_LE_SLOPE_SCALE_0                      (_MK_ADDR_CONST(0xf038))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_SECURE                                  (0x0)
#define CDP_S_LUT_LE_SLOPE_SCALE_0_DUAL                                    (0x0)
#define CDP_S_LUT_LE_SLOPE_SCALE_0_SCR                                       (0)
#define CDP_S_LUT_LE_SLOPE_SCALE_0_WORD_COUNT                              (0x1)
#define CDP_S_LUT_LE_SLOPE_SCALE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_RESET_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_READ_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SHIFT))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_RANGE         (15:0)
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_WOFFSET        (0x0)
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SHIFT \
	(_MK_SHIFT_CONST(16))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SHIFT))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_RANGE        (31:16)
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_WOFFSET        (0x0)
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LE_SLOPE_SHIFT_0
#define CDP_S_LUT_LE_SLOPE_SHIFT_0                      (_MK_ADDR_CONST(0xf03c))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_SECURE                                  (0x0)
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_DUAL                                    (0x0)
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_SCR                                       (0)
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_WORD_COUNT                              (0x1)
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_RESET_MASK            (_MK_MASK_CONST(0x3ff))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_READ_MASK             (_MK_MASK_CONST(0x3ff))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_WRITE_MASK            (_MK_MASK_CONST(0x3ff))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SHIFT))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_RANGE          (4:0)
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_WOFFSET        (0x0)
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SHIFT \
	(_MK_SHIFT_CONST(5))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SHIFT))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_RANGE          (9:5)
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_WOFFSET        (0x0)
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LO_SLOPE_SCALE_0
#define CDP_S_LUT_LO_SLOPE_SCALE_0                      (_MK_ADDR_CONST(0xf040))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_SECURE                                  (0x0)
#define CDP_S_LUT_LO_SLOPE_SCALE_0_DUAL                                    (0x0)
#define CDP_S_LUT_LO_SLOPE_SCALE_0_SCR                                       (0)
#define CDP_S_LUT_LO_SLOPE_SCALE_0_WORD_COUNT                              (0x1)
#define CDP_S_LUT_LO_SLOPE_SCALE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_RESET_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_READ_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SHIFT))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_RANGE         (15:0)
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_WOFFSET        (0x0)
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SHIFT \
	(_MK_SHIFT_CONST(16))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, \
	CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SHIFT))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_RANGE        (31:16)
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_WOFFSET        (0x0)
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_S_LUT_LO_SLOPE_SHIFT_0
#define CDP_S_LUT_LO_SLOPE_SHIFT_0                      (_MK_ADDR_CONST(0xf044))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_SECURE                                  (0x0)
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_DUAL                                    (0x0)
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_SCR                                       (0)
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_WORD_COUNT                              (0x1)
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_RESET_MASK            (_MK_MASK_CONST(0x3ff))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_READ_MASK             (_MK_MASK_CONST(0x3ff))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_WRITE_MASK            (_MK_MASK_CONST(0x3ff))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SHIFT))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_RANGE          (4:0)
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_WOFFSET        (0x0)
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))

#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SHIFT \
	(_MK_SHIFT_CONST(5))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_FIELD \
	(_MK_FIELD_CONST(0x1f, \
	CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SHIFT))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_RANGE          (9:5)
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_WOFFSET        (0x0)
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_OP_ENABLE_0
#define CDP_D_OP_ENABLE_0                               (_MK_ADDR_CONST(0xf048))
#define CDP_D_OP_ENABLE_0_SECURE                                           (0x0)
#define CDP_D_OP_ENABLE_0_DUAL                                             (0x0)
#define CDP_D_OP_ENABLE_0_SCR                                                (0)
#define CDP_D_OP_ENABLE_0_WORD_COUNT                                       (0x1)
#define CDP_D_OP_ENABLE_0_RESET_VAL                        (_MK_MASK_CONST(0x0))
#define CDP_D_OP_ENABLE_0_RESET_MASK                       (_MK_MASK_CONST(0x1))
#define CDP_D_OP_ENABLE_0_SW_DEFAULT_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_D_OP_ENABLE_0_SW_DEFAULT_MASK                  (_MK_MASK_CONST(0x0))
#define CDP_D_OP_ENABLE_0_READ_MASK                        (_MK_MASK_CONST(0x1))
#define CDP_D_OP_ENABLE_0_WRITE_MASK                       (_MK_MASK_CONST(0x1))
#define CDP_D_OP_ENABLE_0_OP_EN_SHIFT                       (_MK_SHIFT_CONST(0))
#define CDP_D_OP_ENABLE_0_OP_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_D_OP_ENABLE_0_OP_EN_SHIFT))
#define CDP_D_OP_ENABLE_0_OP_EN_RANGE                                      (0:0)
#define CDP_D_OP_ENABLE_0_OP_EN_WOFFSET                                    (0x0)
#define CDP_D_OP_ENABLE_0_OP_EN_DEFAULT                    (_MK_MASK_CONST(0x0))
#define CDP_D_OP_ENABLE_0_OP_EN_DEFAULT_MASK               (_MK_MASK_CONST(0x1))
#define CDP_D_OP_ENABLE_0_OP_EN_SW_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CDP_D_OP_ENABLE_0_OP_EN_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_D_OP_ENABLE_0_OP_EN_PARITY_PROTECTION          (_MK_MASK_CONST(0x0))
#define CDP_D_OP_ENABLE_0_OP_EN_PLATFORM_DEPENDENT         (_MK_MASK_CONST(0x1))
#define CDP_D_OP_ENABLE_0_OP_EN_INIT_ENUM                              (DISABLE)
#define CDP_D_OP_ENABLE_0_OP_EN_DISABLE                      (_MK_ENUM_CONST(0))
#define CDP_D_OP_ENABLE_0_OP_EN_ENABLE                       (_MK_ENUM_CONST(1))


// Register CDP_D_FUNC_BYPASS_0
#define CDP_D_FUNC_BYPASS_0                             (_MK_ADDR_CONST(0xf04c))
#define CDP_D_FUNC_BYPASS_0_SECURE                                         (0x0)
#define CDP_D_FUNC_BYPASS_0_DUAL                                           (0x0)
#define CDP_D_FUNC_BYPASS_0_SCR                                              (0)
#define CDP_D_FUNC_BYPASS_0_WORD_COUNT                                     (0x1)
#define CDP_D_FUNC_BYPASS_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_RESET_MASK                     (_MK_MASK_CONST(0x3))
#define CDP_D_FUNC_BYPASS_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_READ_MASK                      (_MK_MASK_CONST(0x3))
#define CDP_D_FUNC_BYPASS_0_WRITE_MASK                     (_MK_MASK_CONST(0x3))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_SHIFT              (_MK_SHIFT_CONST(0))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_SHIFT))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_RANGE                             (0:0)
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_WOFFSET                           (0x0)
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_INIT_ENUM                     (DISABLE)
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_DISABLE             (_MK_ENUM_CONST(0))
#define CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_ENABLE              (_MK_ENUM_CONST(1))

#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_SHIFT                (_MK_SHIFT_CONST(1))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_D_FUNC_BYPASS_0_MUL_BYPASS_SHIFT))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_RANGE                               (1:1)
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_WOFFSET                             (0x0)
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_DEFAULT_MASK        (_MK_MASK_CONST(0x1))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_SW_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_SW_DEFAULT_MASK     (_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_INIT_ENUM                       (DISABLE)
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_DISABLE               (_MK_ENUM_CONST(0))
#define CDP_D_FUNC_BYPASS_0_MUL_BYPASS_ENABLE                (_MK_ENUM_CONST(1))


// Register CDP_D_DST_BASE_ADDR_LOW_0
#define CDP_D_DST_BASE_ADDR_LOW_0                       (_MK_ADDR_CONST(0xf050))
#define CDP_D_DST_BASE_ADDR_LOW_0_SECURE                                   (0x0)
#define CDP_D_DST_BASE_ADDR_LOW_0_DUAL                                     (0x0)
#define CDP_D_DST_BASE_ADDR_LOW_0_SCR                                        (0)
#define CDP_D_DST_BASE_ADDR_LOW_0_WORD_COUNT                               (0x1)
#define CDP_D_DST_BASE_ADDR_LOW_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_LOW_0_RESET_MASK        (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_BASE_ADDR_LOW_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_LOW_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_LOW_0_READ_MASK         (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_BASE_ADDR_LOW_0_WRITE_MASK        (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SHIFT \
	(_MK_SHIFT_CONST(5))
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SHIFT))
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_RANGE                 (31:5)
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_WOFFSET                (0x0)
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DST_BASE_ADDR_HIGH_0
#define CDP_D_DST_BASE_ADDR_HIGH_0                      (_MK_ADDR_CONST(0xf054))
#define CDP_D_DST_BASE_ADDR_HIGH_0_SECURE                                  (0x0)
#define CDP_D_DST_BASE_ADDR_HIGH_0_DUAL                                    (0x0)
#define CDP_D_DST_BASE_ADDR_HIGH_0_SCR                                       (0)
#define CDP_D_DST_BASE_ADDR_HIGH_0_WORD_COUNT                              (0x1)
#define CDP_D_DST_BASE_ADDR_HIGH_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_HIGH_0_RESET_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDP_D_DST_BASE_ADDR_HIGH_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_HIGH_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_HIGH_0_READ_MASK        (_MK_MASK_CONST(0xffffffff))
#define CDP_D_DST_BASE_ADDR_HIGH_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffff))
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SHIFT))
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_RANGE               (31:0)
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_WOFFSET              (0x0)
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DST_LINE_STRIDE_0
#define CDP_D_DST_LINE_STRIDE_0                         (_MK_ADDR_CONST(0xf058))
#define CDP_D_DST_LINE_STRIDE_0_SECURE                                     (0x0)
#define CDP_D_DST_LINE_STRIDE_0_DUAL                                       (0x0)
#define CDP_D_DST_LINE_STRIDE_0_SCR                                          (0)
#define CDP_D_DST_LINE_STRIDE_0_WORD_COUNT                                 (0x1)
#define CDP_D_DST_LINE_STRIDE_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDP_D_DST_LINE_STRIDE_0_RESET_MASK          (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_LINE_STRIDE_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDP_D_DST_LINE_STRIDE_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_D_DST_LINE_STRIDE_0_READ_MASK           (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_LINE_STRIDE_0_WRITE_MASK          (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SHIFT       (_MK_SHIFT_CONST(5))
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SHIFT))
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_RANGE                     (31:5)
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_WOFFSET                    (0x0)
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DST_SURFACE_STRIDE_0
#define CDP_D_DST_SURFACE_STRIDE_0                      (_MK_ADDR_CONST(0xf05c))
#define CDP_D_DST_SURFACE_STRIDE_0_SECURE                                  (0x0)
#define CDP_D_DST_SURFACE_STRIDE_0_DUAL                                    (0x0)
#define CDP_D_DST_SURFACE_STRIDE_0_SCR                                       (0)
#define CDP_D_DST_SURFACE_STRIDE_0_WORD_COUNT                              (0x1)
#define CDP_D_DST_SURFACE_STRIDE_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDP_D_DST_SURFACE_STRIDE_0_RESET_MASK       (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_SURFACE_STRIDE_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDP_D_DST_SURFACE_STRIDE_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_D_DST_SURFACE_STRIDE_0_READ_MASK        (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_SURFACE_STRIDE_0_WRITE_MASK       (_MK_MASK_CONST(0xffffffe0))
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SHIFT \
	(_MK_SHIFT_CONST(5))
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_FIELD \
	(_MK_FIELD_CONST(0x7ffffff, \
	CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SHIFT))
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_RANGE               (31:5)
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_WOFFSET              (0x0)
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x7ffffff))
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DST_DMA_CFG_0
#define CDP_D_DST_DMA_CFG_0                             (_MK_ADDR_CONST(0xf060))
#define CDP_D_DST_DMA_CFG_0_SECURE                                         (0x0)
#define CDP_D_DST_DMA_CFG_0_DUAL                                           (0x0)
#define CDP_D_DST_DMA_CFG_0_SCR                                              (0)
#define CDP_D_DST_DMA_CFG_0_WORD_COUNT                                     (0x1)
#define CDP_D_DST_DMA_CFG_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define CDP_D_DST_DMA_CFG_0_RESET_MASK                     (_MK_MASK_CONST(0x1))
#define CDP_D_DST_DMA_CFG_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_D_DST_DMA_CFG_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CDP_D_DST_DMA_CFG_0_READ_MASK                      (_MK_MASK_CONST(0x1))
#define CDP_D_DST_DMA_CFG_0_WRITE_MASK                     (_MK_MASK_CONST(0x1))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SHIFT              (_MK_SHIFT_CONST(0))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SHIFT))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_RANGE                             (0:0)
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_WOFFSET                           (0x0)
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_DEFAULT           (_MK_MASK_CONST(0x0))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_DEFAULT_MASK      (_MK_MASK_CONST(0x1))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SW_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_CV                  (_MK_ENUM_CONST(0))
#define CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_MC                  (_MK_ENUM_CONST(1))


// Register CDP_D_DST_COMPRESSION_EN_0
#define CDP_D_DST_COMPRESSION_EN_0                      (_MK_ADDR_CONST(0xf064))
#define CDP_D_DST_COMPRESSION_EN_0_SECURE                                  (0x0)
#define CDP_D_DST_COMPRESSION_EN_0_DUAL                                    (0x0)
#define CDP_D_DST_COMPRESSION_EN_0_SCR                                       (0)
#define CDP_D_DST_COMPRESSION_EN_0_WORD_COUNT                              (0x1)
#define CDP_D_DST_COMPRESSION_EN_0_RESET_VAL               (_MK_MASK_CONST(0x0))
#define CDP_D_DST_COMPRESSION_EN_0_RESET_MASK              (_MK_MASK_CONST(0x1))
#define CDP_D_DST_COMPRESSION_EN_0_SW_DEFAULT_VAL          (_MK_MASK_CONST(0x0))
#define CDP_D_DST_COMPRESSION_EN_0_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_D_DST_COMPRESSION_EN_0_READ_MASK               (_MK_MASK_CONST(0x1))
#define CDP_D_DST_COMPRESSION_EN_0_WRITE_MASK              (_MK_MASK_CONST(0x0))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_SHIFT \
	(_MK_SHIFT_CONST(0))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_FIELD \
	(_MK_FIELD_CONST(0x1, \
	CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_SHIFT))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_RANGE                (0:0)
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_WOFFSET              (0x0)
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_DISABLE \
	(_MK_ENUM_CONST(0))
#define CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_ENABLE \
	(_MK_ENUM_CONST(1))


// Register CDP_D_DATA_FORMAT_0
#define CDP_D_DATA_FORMAT_0                             (_MK_ADDR_CONST(0xf068))
#define CDP_D_DATA_FORMAT_0_SECURE                                         (0x0)
#define CDP_D_DATA_FORMAT_0_DUAL                                           (0x0)
#define CDP_D_DATA_FORMAT_0_SCR                                              (0)
#define CDP_D_DATA_FORMAT_0_WORD_COUNT                                     (0x1)
#define CDP_D_DATA_FORMAT_0_RESET_VAL                      (_MK_MASK_CONST(0x1))
#define CDP_D_DATA_FORMAT_0_RESET_MASK                     (_MK_MASK_CONST(0x3))
#define CDP_D_DATA_FORMAT_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_D_DATA_FORMAT_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CDP_D_DATA_FORMAT_0_READ_MASK                      (_MK_MASK_CONST(0x3))
#define CDP_D_DATA_FORMAT_0_WRITE_MASK                     (_MK_MASK_CONST(0x3))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_SHIFT           (_MK_SHIFT_CONST(0))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_FIELD \
	(_MK_FIELD_CONST(0x3, CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_SHIFT))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_RANGE                          (1:0)
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_WOFFSET                        (0x0)
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_DEFAULT        (_MK_MASK_CONST(0x1))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_INT8             (_MK_ENUM_CONST(0))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_INT16            (_MK_ENUM_CONST(1))
#define CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_FP16             (_MK_ENUM_CONST(2))


// Register CDP_D_NAN_FLUSH_TO_ZERO_0
#define CDP_D_NAN_FLUSH_TO_ZERO_0                       (_MK_ADDR_CONST(0xf06c))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_SECURE                                   (0x0)
#define CDP_D_NAN_FLUSH_TO_ZERO_0_DUAL                                     (0x0)
#define CDP_D_NAN_FLUSH_TO_ZERO_0_SCR                                        (0)
#define CDP_D_NAN_FLUSH_TO_ZERO_0_WORD_COUNT                               (0x1)
#define CDP_D_NAN_FLUSH_TO_ZERO_0_RESET_VAL                (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_RESET_MASK               (_MK_MASK_CONST(0x1))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_SW_DEFAULT_VAL           (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_SW_DEFAULT_MASK          (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_READ_MASK                (_MK_MASK_CONST(0x1))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_WRITE_MASK               (_MK_MASK_CONST(0x1))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SHIFT))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_RANGE                        (0:0)
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_WOFFSET                      (0x0)
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_INIT_ENUM                (DISABLE)
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DISABLE        (_MK_ENUM_CONST(0))
#define CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_ENABLE         (_MK_ENUM_CONST(1))


// Register CDP_D_LRN_CFG_0
#define CDP_D_LRN_CFG_0                                 (_MK_ADDR_CONST(0xf070))
#define CDP_D_LRN_CFG_0_SECURE                                             (0x0)
#define CDP_D_LRN_CFG_0_DUAL                                               (0x0)
#define CDP_D_LRN_CFG_0_SCR                                                  (0)
#define CDP_D_LRN_CFG_0_WORD_COUNT                                         (0x1)
#define CDP_D_LRN_CFG_0_RESET_VAL                          (_MK_MASK_CONST(0x0))
#define CDP_D_LRN_CFG_0_RESET_MASK                         (_MK_MASK_CONST(0x3))
#define CDP_D_LRN_CFG_0_SW_DEFAULT_VAL                     (_MK_MASK_CONST(0x0))
#define CDP_D_LRN_CFG_0_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CDP_D_LRN_CFG_0_READ_MASK                          (_MK_MASK_CONST(0x3))
#define CDP_D_LRN_CFG_0_WRITE_MASK                         (_MK_MASK_CONST(0x3))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_SHIFT                   (_MK_SHIFT_CONST(0))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_FIELD \
	(_MK_FIELD_CONST(0x3, CDP_D_LRN_CFG_0_NORMALZ_LEN_SHIFT))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_RANGE                                  (1:0)
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_WOFFSET                                (0x0)
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_DEFAULT                (_MK_MASK_CONST(0x0))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_DEFAULT_MASK           (_MK_MASK_CONST(0x3))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_SW_DEFAULT             (_MK_MASK_CONST(0x0))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_SW_DEFAULT_MASK        (_MK_MASK_CONST(0x0))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_PARITY_PROTECTION      (_MK_MASK_CONST(0x0))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_PLATFORM_DEPENDENT     (_MK_MASK_CONST(0x1))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_LEN3                     (_MK_ENUM_CONST(0))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_LEN5                     (_MK_ENUM_CONST(1))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_LEN7                     (_MK_ENUM_CONST(2))
#define CDP_D_LRN_CFG_0_NORMALZ_LEN_LEN9                     (_MK_ENUM_CONST(3))


// Register CDP_D_DATIN_OFFSET_0
#define CDP_D_DATIN_OFFSET_0                            (_MK_ADDR_CONST(0xf074))
#define CDP_D_DATIN_OFFSET_0_SECURE                                        (0x0)
#define CDP_D_DATIN_OFFSET_0_DUAL                                          (0x0)
#define CDP_D_DATIN_OFFSET_0_SCR                                             (0)
#define CDP_D_DATIN_OFFSET_0_WORD_COUNT                                    (0x1)
#define CDP_D_DATIN_OFFSET_0_RESET_VAL                     (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_OFFSET_0_RESET_MASK                 (_MK_MASK_CONST(0xffff))
#define CDP_D_DATIN_OFFSET_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_OFFSET_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_OFFSET_0_READ_MASK                  (_MK_MASK_CONST(0xffff))
#define CDP_D_DATIN_OFFSET_0_WRITE_MASK                 (_MK_MASK_CONST(0xffff))
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_SHIFT             (_MK_SHIFT_CONST(0))
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_FIELD \
	(_MK_FIELD_CONST(0xffff, CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_SHIFT))
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_RANGE                           (15:0)
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_WOFFSET                          (0x0)
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_DEFAULT          (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DATIN_SCALE_0
#define CDP_D_DATIN_SCALE_0                             (_MK_ADDR_CONST(0xf078))
#define CDP_D_DATIN_SCALE_0_SECURE                                         (0x0)
#define CDP_D_DATIN_SCALE_0_DUAL                                           (0x0)
#define CDP_D_DATIN_SCALE_0_SCR                                              (0)
#define CDP_D_DATIN_SCALE_0_WORD_COUNT                                     (0x1)
#define CDP_D_DATIN_SCALE_0_RESET_VAL                      (_MK_MASK_CONST(0x1))
#define CDP_D_DATIN_SCALE_0_RESET_MASK                  (_MK_MASK_CONST(0xffff))
#define CDP_D_DATIN_SCALE_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SCALE_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SCALE_0_READ_MASK                   (_MK_MASK_CONST(0xffff))
#define CDP_D_DATIN_SCALE_0_WRITE_MASK                  (_MK_MASK_CONST(0xffff))
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_SHIFT               (_MK_SHIFT_CONST(0))
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, CDP_D_DATIN_SCALE_0_DATIN_SCALE_SHIFT))
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_RANGE                             (15:0)
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_WOFFSET                            (0x0)
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_DEFAULT            (_MK_MASK_CONST(0x1))
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_DEFAULT_MASK    (_MK_MASK_CONST(0xffff))
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_SW_DEFAULT         (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_SW_DEFAULT_MASK    (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SCALE_0_DATIN_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DATIN_SHIFTER_0
#define CDP_D_DATIN_SHIFTER_0                           (_MK_ADDR_CONST(0xf07c))
#define CDP_D_DATIN_SHIFTER_0_SECURE                                       (0x0)
#define CDP_D_DATIN_SHIFTER_0_DUAL                                         (0x0)
#define CDP_D_DATIN_SHIFTER_0_SCR                                            (0)
#define CDP_D_DATIN_SHIFTER_0_WORD_COUNT                                   (0x1)
#define CDP_D_DATIN_SHIFTER_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SHIFTER_0_RESET_MASK                  (_MK_MASK_CONST(0x1f))
#define CDP_D_DATIN_SHIFTER_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SHIFTER_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SHIFTER_0_READ_MASK                   (_MK_MASK_CONST(0x1f))
#define CDP_D_DATIN_SHIFTER_0_WRITE_MASK                  (_MK_MASK_CONST(0x1f))
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_SHIFT           (_MK_SHIFT_CONST(0))
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_FIELD \
	(_MK_FIELD_CONST(0x1f, CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_SHIFT))
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_RANGE                          (4:0)
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_WOFFSET                        (0x0)
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_DEFAULT_MASK \
	(_MK_MASK_CONST(0x1f))
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DATOUT_OFFSET_0
#define CDP_D_DATOUT_OFFSET_0                           (_MK_ADDR_CONST(0xf080))
#define CDP_D_DATOUT_OFFSET_0_SECURE                                       (0x0)
#define CDP_D_DATOUT_OFFSET_0_DUAL                                         (0x0)
#define CDP_D_DATOUT_OFFSET_0_SCR                                            (0)
#define CDP_D_DATOUT_OFFSET_0_WORD_COUNT                                   (0x1)
#define CDP_D_DATOUT_OFFSET_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_OFFSET_0_RESET_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_D_DATOUT_OFFSET_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_OFFSET_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_OFFSET_0_READ_MASK             (_MK_MASK_CONST(0xffffffff))
#define CDP_D_DATOUT_OFFSET_0_WRITE_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_SHIFT           (_MK_SHIFT_CONST(0))
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_SHIFT))
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_RANGE                         (31:0)
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_WOFFSET                        (0x0)
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DATOUT_SCALE_0
#define CDP_D_DATOUT_SCALE_0                            (_MK_ADDR_CONST(0xf084))
#define CDP_D_DATOUT_SCALE_0_SECURE                                        (0x0)
#define CDP_D_DATOUT_SCALE_0_DUAL                                          (0x0)
#define CDP_D_DATOUT_SCALE_0_SCR                                             (0)
#define CDP_D_DATOUT_SCALE_0_WORD_COUNT                                    (0x1)
#define CDP_D_DATOUT_SCALE_0_RESET_VAL                     (_MK_MASK_CONST(0x1))
#define CDP_D_DATOUT_SCALE_0_RESET_MASK                 (_MK_MASK_CONST(0xffff))
#define CDP_D_DATOUT_SCALE_0_SW_DEFAULT_VAL                (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SCALE_0_SW_DEFAULT_MASK               (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SCALE_0_READ_MASK                  (_MK_MASK_CONST(0xffff))
#define CDP_D_DATOUT_SCALE_0_WRITE_MASK                 (_MK_MASK_CONST(0xffff))
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_SHIFT             (_MK_SHIFT_CONST(0))
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_FIELD \
	(_MK_FIELD_CONST(0xffff, CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_SHIFT))
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_RANGE                           (15:0)
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_WOFFSET                          (0x0)
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_DEFAULT          (_MK_MASK_CONST(0x1))
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffff))
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_SW_DEFAULT       (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_DATOUT_SHIFTER_0
#define CDP_D_DATOUT_SHIFTER_0                          (_MK_ADDR_CONST(0xf088))
#define CDP_D_DATOUT_SHIFTER_0_SECURE                                      (0x0)
#define CDP_D_DATOUT_SHIFTER_0_DUAL                                        (0x0)
#define CDP_D_DATOUT_SHIFTER_0_SCR                                           (0)
#define CDP_D_DATOUT_SHIFTER_0_WORD_COUNT                                  (0x1)
#define CDP_D_DATOUT_SHIFTER_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SHIFTER_0_RESET_MASK                 (_MK_MASK_CONST(0x3f))
#define CDP_D_DATOUT_SHIFTER_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SHIFTER_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SHIFTER_0_READ_MASK                  (_MK_MASK_CONST(0x3f))
#define CDP_D_DATOUT_SHIFTER_0_WRITE_MASK                 (_MK_MASK_CONST(0x3f))
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_FIELD \
	(_MK_FIELD_CONST(0x3f, CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_SHIFT))
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_RANGE                        (5:0)
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_WOFFSET                      (0x0)
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_DEFAULT_MASK \
	(_MK_MASK_CONST(0x3f))
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_NAN_INPUT_NUM_0
#define CDP_D_NAN_INPUT_NUM_0                           (_MK_ADDR_CONST(0xf08c))
#define CDP_D_NAN_INPUT_NUM_0_SECURE                                       (0x0)
#define CDP_D_NAN_INPUT_NUM_0_DUAL                                         (0x0)
#define CDP_D_NAN_INPUT_NUM_0_SCR                                            (0)
#define CDP_D_NAN_INPUT_NUM_0_WORD_COUNT                                   (0x1)
#define CDP_D_NAN_INPUT_NUM_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_INPUT_NUM_0_RESET_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_D_NAN_INPUT_NUM_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_INPUT_NUM_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_INPUT_NUM_0_READ_MASK             (_MK_MASK_CONST(0xffffffff))
#define CDP_D_NAN_INPUT_NUM_0_WRITE_MASK                   (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SHIFT           (_MK_SHIFT_CONST(0))
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SHIFT))
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_RANGE                         (31:0)
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_WOFFSET                        (0x0)
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_INF_INPUT_NUM_0
#define CDP_D_INF_INPUT_NUM_0                           (_MK_ADDR_CONST(0xf090))
#define CDP_D_INF_INPUT_NUM_0_SECURE                                       (0x0)
#define CDP_D_INF_INPUT_NUM_0_DUAL                                         (0x0)
#define CDP_D_INF_INPUT_NUM_0_SCR                                            (0)
#define CDP_D_INF_INPUT_NUM_0_WORD_COUNT                                   (0x1)
#define CDP_D_INF_INPUT_NUM_0_RESET_VAL                    (_MK_MASK_CONST(0x0))
#define CDP_D_INF_INPUT_NUM_0_RESET_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_D_INF_INPUT_NUM_0_SW_DEFAULT_VAL               (_MK_MASK_CONST(0x0))
#define CDP_D_INF_INPUT_NUM_0_SW_DEFAULT_MASK              (_MK_MASK_CONST(0x0))
#define CDP_D_INF_INPUT_NUM_0_READ_MASK             (_MK_MASK_CONST(0xffffffff))
#define CDP_D_INF_INPUT_NUM_0_WRITE_MASK                   (_MK_MASK_CONST(0x0))
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SHIFT           (_MK_SHIFT_CONST(0))
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SHIFT))
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_RANGE                         (31:0)
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_WOFFSET                        (0x0)
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_DEFAULT        (_MK_MASK_CONST(0x0))
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SW_DEFAULT     (_MK_MASK_CONST(0x0))
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_NAN_OUTPUT_NUM_0
#define CDP_D_NAN_OUTPUT_NUM_0                          (_MK_ADDR_CONST(0xf094))
#define CDP_D_NAN_OUTPUT_NUM_0_SECURE                                      (0x0)
#define CDP_D_NAN_OUTPUT_NUM_0_DUAL                                        (0x0)
#define CDP_D_NAN_OUTPUT_NUM_0_SCR                                           (0)
#define CDP_D_NAN_OUTPUT_NUM_0_WORD_COUNT                                  (0x1)
#define CDP_D_NAN_OUTPUT_NUM_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_OUTPUT_NUM_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_D_NAN_OUTPUT_NUM_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_OUTPUT_NUM_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_OUTPUT_NUM_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_D_NAN_OUTPUT_NUM_0_WRITE_MASK                  (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SHIFT))
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_RANGE                       (31:0)
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_WOFFSET                      (0x0)
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_OUT_SATURATION_0
#define CDP_D_OUT_SATURATION_0                          (_MK_ADDR_CONST(0xf098))
#define CDP_D_OUT_SATURATION_0_SECURE                                      (0x0)
#define CDP_D_OUT_SATURATION_0_DUAL                                        (0x0)
#define CDP_D_OUT_SATURATION_0_SCR                                           (0)
#define CDP_D_OUT_SATURATION_0_WORD_COUNT                                  (0x1)
#define CDP_D_OUT_SATURATION_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_D_OUT_SATURATION_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_D_OUT_SATURATION_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_D_OUT_SATURATION_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_D_OUT_SATURATION_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_D_OUT_SATURATION_0_WRITE_MASK                  (_MK_MASK_CONST(0x0))
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_OUT_SATURATION_0_OUT_SATURATION_SHIFT))
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_RANGE                       (31:0)
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_WOFFSET                      (0x0)
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_OUT_SATURATION_0_OUT_SATURATION_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_PERF_ENABLE_0
#define CDP_D_PERF_ENABLE_0                             (_MK_ADDR_CONST(0xf09c))
#define CDP_D_PERF_ENABLE_0_SECURE                                         (0x0)
#define CDP_D_PERF_ENABLE_0_DUAL                                           (0x0)
#define CDP_D_PERF_ENABLE_0_SCR                                              (0)
#define CDP_D_PERF_ENABLE_0_WORD_COUNT                                     (0x1)
#define CDP_D_PERF_ENABLE_0_RESET_VAL                      (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_RESET_MASK                     (_MK_MASK_CONST(0x3))
#define CDP_D_PERF_ENABLE_0_SW_DEFAULT_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_SW_DEFAULT_MASK                (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_READ_MASK                      (_MK_MASK_CONST(0x3))
#define CDP_D_PERF_ENABLE_0_WRITE_MASK                     (_MK_MASK_CONST(0x3))
#define CDP_D_PERF_ENABLE_0_DMA_EN_SHIFT                    (_MK_SHIFT_CONST(0))
#define CDP_D_PERF_ENABLE_0_DMA_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_D_PERF_ENABLE_0_DMA_EN_SHIFT))
#define CDP_D_PERF_ENABLE_0_DMA_EN_RANGE                                   (0:0)
#define CDP_D_PERF_ENABLE_0_DMA_EN_WOFFSET                                 (0x0)
#define CDP_D_PERF_ENABLE_0_DMA_EN_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_DMA_EN_DEFAULT_MASK            (_MK_MASK_CONST(0x1))
#define CDP_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_DMA_EN_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_DMA_EN_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_DMA_EN_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CDP_D_PERF_ENABLE_0_DMA_EN_INIT_ENUM                           (DISABLE)
#define CDP_D_PERF_ENABLE_0_DMA_EN_DISABLE                   (_MK_ENUM_CONST(0))
#define CDP_D_PERF_ENABLE_0_DMA_EN_ENABLE                    (_MK_ENUM_CONST(1))

#define CDP_D_PERF_ENABLE_0_LUT_EN_SHIFT                    (_MK_SHIFT_CONST(1))
#define CDP_D_PERF_ENABLE_0_LUT_EN_FIELD \
	(_MK_FIELD_CONST(0x1, CDP_D_PERF_ENABLE_0_LUT_EN_SHIFT))
#define CDP_D_PERF_ENABLE_0_LUT_EN_RANGE                                   (1:1)
#define CDP_D_PERF_ENABLE_0_LUT_EN_WOFFSET                                 (0x0)
#define CDP_D_PERF_ENABLE_0_LUT_EN_DEFAULT                 (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_LUT_EN_DEFAULT_MASK            (_MK_MASK_CONST(0x1))
#define CDP_D_PERF_ENABLE_0_LUT_EN_SW_DEFAULT              (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_LUT_EN_SW_DEFAULT_MASK         (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_LUT_EN_PARITY_PROTECTION       (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_ENABLE_0_LUT_EN_PLATFORM_DEPENDENT      (_MK_MASK_CONST(0x1))
#define CDP_D_PERF_ENABLE_0_LUT_EN_INIT_ENUM                           (DISABLE)
#define CDP_D_PERF_ENABLE_0_LUT_EN_DISABLE                   (_MK_ENUM_CONST(0))
#define CDP_D_PERF_ENABLE_0_LUT_EN_ENABLE                    (_MK_ENUM_CONST(1))


// Register CDP_D_PERF_WRITE_STALL_0
#define CDP_D_PERF_WRITE_STALL_0                        (_MK_ADDR_CONST(0xf0a0))
#define CDP_D_PERF_WRITE_STALL_0_SECURE                                    (0x0)
#define CDP_D_PERF_WRITE_STALL_0_DUAL                                      (0x0)
#define CDP_D_PERF_WRITE_STALL_0_SCR                                         (0)
#define CDP_D_PERF_WRITE_STALL_0_WORD_COUNT                                (0x1)
#define CDP_D_PERF_WRITE_STALL_0_RESET_VAL                 (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_WRITE_STALL_0_RESET_MASK         (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_WRITE_STALL_0_SW_DEFAULT_VAL            (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_WRITE_STALL_0_SW_DEFAULT_MASK           (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_WRITE_STALL_0_READ_MASK          (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_WRITE_STALL_0_WRITE_MASK                (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SHIFT     (_MK_SHIFT_CONST(0))
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SHIFT))
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_RANGE                   (31:0)
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_WOFFSET                  (0x0)
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_PERF_LUT_UFLOW_0
#define CDP_D_PERF_LUT_UFLOW_0                          (_MK_ADDR_CONST(0xf0a4))
#define CDP_D_PERF_LUT_UFLOW_0_SECURE                                      (0x0)
#define CDP_D_PERF_LUT_UFLOW_0_DUAL                                        (0x0)
#define CDP_D_PERF_LUT_UFLOW_0_SCR                                           (0)
#define CDP_D_PERF_LUT_UFLOW_0_WORD_COUNT                                  (0x1)
#define CDP_D_PERF_LUT_UFLOW_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_UFLOW_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_UFLOW_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_UFLOW_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_UFLOW_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_UFLOW_0_WRITE_MASK                  (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_SHIFT))
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_RANGE                       (31:0)
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_WOFFSET                      (0x0)
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_PERF_LUT_OFLOW_0
#define CDP_D_PERF_LUT_OFLOW_0                          (_MK_ADDR_CONST(0xf0a8))
#define CDP_D_PERF_LUT_OFLOW_0_SECURE                                      (0x0)
#define CDP_D_PERF_LUT_OFLOW_0_DUAL                                        (0x0)
#define CDP_D_PERF_LUT_OFLOW_0_SCR                                           (0)
#define CDP_D_PERF_LUT_OFLOW_0_WORD_COUNT                                  (0x1)
#define CDP_D_PERF_LUT_OFLOW_0_RESET_VAL                   (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_OFLOW_0_RESET_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_OFLOW_0_SW_DEFAULT_VAL              (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_OFLOW_0_SW_DEFAULT_MASK             (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_OFLOW_0_READ_MASK            (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_OFLOW_0_WRITE_MASK                  (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_SHIFT         (_MK_SHIFT_CONST(0))
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_SHIFT))
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_RANGE                       (31:0)
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_WOFFSET                      (0x0)
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_DEFAULT      (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_PERF_LUT_HYBRID_0
#define CDP_D_PERF_LUT_HYBRID_0                         (_MK_ADDR_CONST(0xf0ac))
#define CDP_D_PERF_LUT_HYBRID_0_SECURE                                     (0x0)
#define CDP_D_PERF_LUT_HYBRID_0_DUAL                                       (0x0)
#define CDP_D_PERF_LUT_HYBRID_0_SCR                                          (0)
#define CDP_D_PERF_LUT_HYBRID_0_WORD_COUNT                                 (0x1)
#define CDP_D_PERF_LUT_HYBRID_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_HYBRID_0_RESET_MASK          (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_HYBRID_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_HYBRID_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_HYBRID_0_READ_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_HYBRID_0_WRITE_MASK                 (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_SHIFT       (_MK_SHIFT_CONST(0))
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_SHIFT))
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_RANGE                     (31:0)
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_WOFFSET                    (0x0)
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_PERF_LUT_LE_HIT_0
#define CDP_D_PERF_LUT_LE_HIT_0                         (_MK_ADDR_CONST(0xf0b0))
#define CDP_D_PERF_LUT_LE_HIT_0_SECURE                                     (0x0)
#define CDP_D_PERF_LUT_LE_HIT_0_DUAL                                       (0x0)
#define CDP_D_PERF_LUT_LE_HIT_0_SCR                                          (0)
#define CDP_D_PERF_LUT_LE_HIT_0_WORD_COUNT                                 (0x1)
#define CDP_D_PERF_LUT_LE_HIT_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LE_HIT_0_RESET_MASK          (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_LE_HIT_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LE_HIT_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LE_HIT_0_READ_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_LE_HIT_0_WRITE_MASK                 (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_SHIFT       (_MK_SHIFT_CONST(0))
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_SHIFT))
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_RANGE                     (31:0)
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_WOFFSET                    (0x0)
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_PERF_LUT_LO_HIT_0
#define CDP_D_PERF_LUT_LO_HIT_0                         (_MK_ADDR_CONST(0xf0b4))
#define CDP_D_PERF_LUT_LO_HIT_0_SECURE                                     (0x0)
#define CDP_D_PERF_LUT_LO_HIT_0_DUAL                                       (0x0)
#define CDP_D_PERF_LUT_LO_HIT_0_SCR                                          (0)
#define CDP_D_PERF_LUT_LO_HIT_0_WORD_COUNT                                 (0x1)
#define CDP_D_PERF_LUT_LO_HIT_0_RESET_VAL                  (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LO_HIT_0_RESET_MASK          (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_LO_HIT_0_SW_DEFAULT_VAL             (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LO_HIT_0_SW_DEFAULT_MASK            (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LO_HIT_0_READ_MASK           (_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_LO_HIT_0_WRITE_MASK                 (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_SHIFT       (_MK_SHIFT_CONST(0))
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_FIELD \
	(_MK_FIELD_CONST(0xffffffff, \
	CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_SHIFT))
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_RANGE                     (31:0)
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_WOFFSET                    (0x0)
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_DEFAULT    (_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_DEFAULT_MASK \
	(_MK_MASK_CONST(0xffffffff))
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_SW_DEFAULT \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_SW_DEFAULT_MASK \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_PARITY_PROTECTION \
	(_MK_MASK_CONST(0x0))
#define CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_PLATFORM_DEPENDENT \
	(_MK_MASK_CONST(0x1))


// Register CDP_D_CYA_0
#define CDP_D_CYA_0                                     (_MK_ADDR_CONST(0xf0b8))
#define CDP_D_CYA_0_SECURE                                                 (0x0)
#define CDP_D_CYA_0_DUAL                                                   (0x0)
#define CDP_D_CYA_0_SCR                                                      (0)
#define CDP_D_CYA_0_WORD_COUNT                                             (0x1)
#define CDP_D_CYA_0_RESET_VAL                              (_MK_MASK_CONST(0x0))
#define CDP_D_CYA_0_RESET_MASK                      (_MK_MASK_CONST(0xffffffff))
#define CDP_D_CYA_0_SW_DEFAULT_VAL                         (_MK_MASK_CONST(0x0))
#define CDP_D_CYA_0_SW_DEFAULT_MASK                        (_MK_MASK_CONST(0x0))
#define CDP_D_CYA_0_READ_MASK                       (_MK_MASK_CONST(0xffffffff))
#define CDP_D_CYA_0_WRITE_MASK                      (_MK_MASK_CONST(0xffffffff))
#define CDP_D_CYA_0_CYA_SHIFT                               (_MK_SHIFT_CONST(0))
#define CDP_D_CYA_0_CYA_FIELD \
	(_MK_FIELD_CONST(0xffffffff, CDP_D_CYA_0_CYA_SHIFT))
#define CDP_D_CYA_0_CYA_RANGE                                             (31:0)
#define CDP_D_CYA_0_CYA_WOFFSET                                            (0x0)
#define CDP_D_CYA_0_CYA_DEFAULT                            (_MK_MASK_CONST(0x0))
#define CDP_D_CYA_0_CYA_DEFAULT_MASK                (_MK_MASK_CONST(0xffffffff))
#define CDP_D_CYA_0_CYA_SW_DEFAULT                         (_MK_MASK_CONST(0x0))
#define CDP_D_CYA_0_CYA_SW_DEFAULT_MASK                    (_MK_MASK_CONST(0x0))
#define CDP_D_CYA_0_CYA_PARITY_PROTECTION                  (_MK_MASK_CONST(0x0))
#define CDP_D_CYA_0_CYA_PLATFORM_DEPENDENT                 (_MK_MASK_CONST(0x1))








#endif
