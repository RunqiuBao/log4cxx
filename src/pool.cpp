/*
 * Copyright 2003,2004 The Apache Software Foundation.
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
 
#include <log4cxx/helpers/pool.h>
#include <log4cxx/helpers/exception.h>
#include <log4cxx/helpers/aprinitializer.h>
#include <apr_pools.h>

using namespace log4cxx::helpers;
using namespace log4cxx;


Pool::Pool() : pool(0) {
    apr_status_t stat = apr_pool_create(&pool, APRInitializer::getRootPool());
	if (stat != APR_SUCCESS) {
		throw PoolException(stat);
	}
}

Pool::~Pool() {
	apr_pool_destroy(pool);
}
