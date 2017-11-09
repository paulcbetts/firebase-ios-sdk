/*
 * Copyright 2017 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "src/cpp/util/random.h"

#include <stdint.h>
#include <stdlib.h>
#include <string>

static const double kArc4RandomMax = 0x100000000;

static const int kAutoIdLength = 20;
static const char* const kAutoIdAlphabet =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

namespace firestore {

double RandomDouble() {
  return static_cast<double>(arc4random()) / kArc4RandomMax;
}

std::string CreateAutoId() {
  std::string auto_id;
  auto_id.reserve(kAutoIdLength);

  for (int i = 0; i < kAutoIdLength; i++) {
    uint32_t rand_index =
        arc4random_uniform(static_cast<uint32_t>(sizeof(kAutoIdAlphabet)));
    auto_id.append(1, kAutoIdAlphabet[rand_index]);
  }
  return auto_id;
}

}  // namespace firestore
