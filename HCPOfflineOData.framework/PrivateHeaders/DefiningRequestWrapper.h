//
//  DefiningRequestWrapper.h
//
//  Created by Li, Wei Xiang on 2016-09-06.
//  Copyright © 2016 sap. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface DefiningRequestWrapper : NSObject

- (instancetype) init:(NSString *) name url:(NSString *) url retrieveStreams:(bool)retrieveStreams;

- (NSString *) getName;
- (NSString *) getUrl;
- (bool) getRetrieveStreams;
@end
