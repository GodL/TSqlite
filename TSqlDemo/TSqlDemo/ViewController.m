//
//  ViewController.m
//  TSqlDemo
//
//  Created by 李浩 on 2017/3/24.
//  Copyright © 2017年 李浩. All rights reserved.
//

#import "ViewController.h"
#import <YYModel/YYModel.h>
#import "SqlModel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    YYClassInfo* info = [YYClassInfo classInfoWithClass:[SqlModel class]];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
