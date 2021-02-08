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

#ifndef ALIBABACLOUD_MULTIMEDIAAI_MODEL_GETTEMPLATERESULT_H_
#define ALIBABACLOUD_MULTIMEDIAAI_MODEL_GETTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/multimediaai/MultimediaaiExport.h>

namespace AlibabaCloud
{
	namespace Multimediaai
	{
		namespace Model
		{
			class ALIBABACLOUD_MULTIMEDIAAI_EXPORT GetTemplateResult : public ServiceResult
			{
			public:


				GetTemplateResult();
				explicit GetTemplateResult(const std::string &payload);
				~GetTemplateResult();
				bool getIsDefault()const;
				int getCategory()const;
				std::string getContent()const;
				std::string getCreateTime()const;
				std::string getUpdateTime()const;
				std::string getTemplateName()const;
				std::string getTemplateId()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool isDefault_;
				int category_;
				std::string content_;
				std::string createTime_;
				std::string updateTime_;
				std::string templateName_;
				std::string templateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MULTIMEDIAAI_MODEL_GETTEMPLATERESULT_H_