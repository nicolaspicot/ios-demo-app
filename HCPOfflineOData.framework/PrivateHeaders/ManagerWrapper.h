//
//  ManagerWrapper.h
//
//  Created by Gong, Yan on 7/15/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StoreWrapper.h"
#import "StoreOptionsWrapper.h"

@interface ManagerWrapper : NSObject

+ (StoreWrapper * ) createStore;

+ (BOOL) removeStore:(StoreOptionsWrapper *) storeOpts
			   error:(NSError *__autoreleasing*) error;

+ (NSString *) getLibraryVersion;

@end
