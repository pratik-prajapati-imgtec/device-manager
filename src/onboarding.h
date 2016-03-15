/***************************************************************************************************
 * Copyright (c) 2016, Imagination Technologies Limited and/or its affiliated group companies
 * and/or licensors
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted
 * provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions
 *    and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used to
 *    endorse or promote products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
 * WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

 /**
  * @file onboarding.h
  * @brief Header file for exposing 6lowpan onboarding functions.
  */

#ifndef ONBOARDING_H
#define ONBOARDING_H

#ifdef	__cplusplus
extern "C" {
#endif

/**
 * @brief Show 6lowpan channel.
 */
void ShowChannel(void);

/**
 * @brief Show 6lowpan interface.
 */
void ShowInterface(void);

/**
 * @brief Show 6lowpan pan ID.
 */
void ShowPanID(void);

/**
 * @brief Set 6lowpan channel.
 * @param channel 6lowpan channel.
 */
void SetChannel(unsigned int channel);

/**
 * @brief Set 6lowpan interface.
 * @param interface wpan interface.
 */
void SetInterface(unsigned int interface);

/**
 * @brief Set 6lowpan pan ID.
 * @param id wpan pan id for wpan interface.
 */
void SetPanID(char *id);

#ifdef	__cplusplus
}
#endif

#endif	/* ONBOARDING_H */