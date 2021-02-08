/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
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

#include <alibabacloud/rtc/model/DescribeRTCAppKeyRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRTCAppKeyRequest;

DescribeRTCAppKeyRequest::DescribeRTCAppKeyRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRTCAppKey")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRTCAppKeyRequest::~DescribeRTCAppKeyRequest()
{}

std::string DescribeRTCAppKeyRequest::getShowLog()const
{
	return showLog_;
}

void DescribeRTCAppKeyRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeRTCAppKeyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRTCAppKeyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRTCAppKeyRequest::getAppId()const
{
	return appId_;
}

void DescribeRTCAppKeyRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

