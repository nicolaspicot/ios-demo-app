// *****************************************************
// Copyright (c) 2016 SAP AG or an SAP affiliate company. All rights reserved.
// *****************************************************

#import <Foundation/Foundation.h>

@interface StoreOptionsWrapper : NSObject

@property(nonatomic,copy)          NSString*               serviceRoot;
@property(nonatomic,copy)          NSString*               storeName;
@property(nonatomic,copy)          NSString*               storePath;
@property(nonatomic,copy)          NSString*               storeEncryptionKey;
@property(nonatomic,copy)          NSString*               host;
@property(nonatomic,assign)        NSInteger               port;
@property(nonatomic,copy)          NSString*               urlSuffix;
@property(nonatomic,copy)          NSString*               extraStreamParms;
@property(nonatomic,assign)        bool                    enableHttps;
@property(nonatomic,assign)        bool                    enableRepeatableRequests;
@property(nonatomic,assign)        NSInteger               pageSize;
@property(nonatomic,readonly)      NSMutableDictionary*    customHeaders;
@property(nonatomic,readonly)      NSMutableDictionary*    customCookies;
@property(nonatomic,readonly)      NSMutableDictionary*    definingRequests;

@end
