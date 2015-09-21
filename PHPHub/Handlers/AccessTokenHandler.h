//
//  AccessTokenHandler.h
//  PHPHub
//
//  Created by Aufree on 9/21/15.
//  Copyright (c) 2015 ESTGroup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFOAuth2Manager.h"

@interface AccessTokenHandler : NSObject

+ (void)fetchClientGrantToken;

+ (NSString *)getClientGrantAccessTokenFromLocal;
+ (NSString *)getPasswordGrantAccessToken;

+ (void)storeClientGrantAccessToken:(NSString *)token;
+ (void)storePasswordGrantAccessToken:(NSString *)token;

+ (void)clearToken;

+ (void)fetchClientGrantTokenWithRetryTimes:(NSInteger)times callback:(BaseResultBlock)block;
@end
