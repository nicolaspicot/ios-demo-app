//
//  MessagesWrapper.h
//  HCPOfflineOData
//
//  Created by Li, Wei Xiang on 2016-11-21.
//  Copyright © 2016 sap. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MessagesWrapper : NSObject

+ (bool) shouldRetryAuth:(int) error;

@end
