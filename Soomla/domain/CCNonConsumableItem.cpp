/*
 Copyright (C) 2012-2014 Soomla Inc.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

// Created by Fedor Shubin on 5/19/13.

#include "CCNonConsumableItem.h"

USING_NS_CC;

namespace soomla {
    CCNonConsumableItem *CCNonConsumableItem::create(CCString *name, CCString *description, CCString *itemId, CCPurchaseType *purchaseType) {
        CCNonConsumableItem *ret = new CCNonConsumableItem();
        if (ret->init(name, description, itemId, purchaseType)) {
            ret->autorelease();
        }
        else {
            CC_SAFE_DELETE(ret);
        }

        return ret;
    }

    cocos2d::CCDictionary *CCNonConsumableItem::toDictionary() {
        return this->putTypeData(CCPurchasableVirtualItem::toDictionary(), CCStoreConsts::JSON_JSON_TYPE_NON_CONSUMABLE_ITEM);
    }
};
