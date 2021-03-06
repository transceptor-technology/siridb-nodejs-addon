/*
 * addon.cc
 *
 *  Created on: Sep 15, 2017
 *      Author: Jeroen van der Heijden <jeroen@transceptor.technology>
 */
#include <node.h>
#include <libsiridb/siridb.h>
#include "sdbcl.h"

namespace siridb {

using v8::Local;
using v8::Object;

void InitAll(Local<Object> exports) {
  SiriDBClient::Init(exports);
}

NODE_MODULE(siridb, InitAll)

}  // namespace siridb
