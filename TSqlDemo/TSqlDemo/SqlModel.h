//
//  SqlModel.h
//  TSqlDemo
//
//  Created by 李浩 on 2017/4/14.
//  Copyright © 2017年 李浩. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SqlModel : NSObject

@property (nonatomic,assign) NSInteger i;

@property (nonatomic,assign) float f;

@property (nonatomic,assign) double d;

@property (nonatomic,assign) int i1;

@property (nonatomic,assign) long long ll;

@property (nonatomic,copy) NSString* str_copy;

@property (nonatomic,strong) NSString* str_strong;

@property (nonatomic,strong) NSData* data;

@property (nonatomic,strong) NSDate* date;

@property (nonatomic,copy,readonly) NSString* str_readonly;

@property (nonatomic,copy,readwrite) NSString* str_write;

@property (nonatomic,readonly,unsafe_unretained) id object;

@end
