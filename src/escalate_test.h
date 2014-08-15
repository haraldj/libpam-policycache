/**
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ESCALATE_TEST_H_
#define ESCALATE_TEST_H_

#include <glib.h>
#include <sys/types.h>
#include <unistd.h>

typedef struct {
  int type;
  gchar *message;
  gchar *expect;
} EscalateTestPrompt;

void EscalateTestSetHelperMessages(gchar **expected_messages,
                                   gchar **response_messages);

void EscalateTestMockAuthenticate(EscalateTestPrompt *prompts, int result);

void EscalateTestSetIds(uid_t ruid, uid_t euid, gid_t rgid, gid_t egid);

#endif