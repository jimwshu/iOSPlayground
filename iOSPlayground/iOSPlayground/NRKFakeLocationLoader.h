//
//  NRKFakeLocationLoader.h
//  iOSPlayground
//
//  Created by noark on 7/30/15.
//  Copyright © 2015 noark. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NRKFakeLocationLoader : NSObject

+ (void)locationOnComplete:(void (^)())complete;

@end
