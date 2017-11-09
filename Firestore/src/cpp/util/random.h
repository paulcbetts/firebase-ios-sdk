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

#ifndef FIRESTORE_SRC_CPP_UTIL_RANDOM_H_
#define FIRESTORE_SRC_CPP_UTIL_RANDOM_H_

#include <string>

namespace firestore {

// Generates a random double between 0 and 1.
double RandomDouble();

// Generates a random ID suitable for use as a document ID.
std::string CreateAutoId();

}  // namespace firestore

#endif  // FIRESTORE_SRC_CPP_UTIL_RANDOM_H_
