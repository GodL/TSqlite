//
//  TProtocol.h
//  TSqlDemo
//
//  Created by 李浩 on 2017/4/10.
//  Copyright © 2017年 李浩. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TProtocol <NSObject>

+ (NSString*)tableName;

+ (NSString*)primaryKey;

+ (NSArray<NSString*>*)ignoredProperties;

+ (NSArray<NSString*>*)requiredProperties;

@end
