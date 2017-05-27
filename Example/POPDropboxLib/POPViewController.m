//
//  POPViewController.m
//  POPDropboxLib
//
//  Created by popeveryday@gmail.com on 05/26/2017.
//  Copyright (c) 2017 popeveryday@gmail.com. All rights reserved.
//

#import "POPViewController.h"
#import <POPDropboxLib/POPDropboxLib.h>

@interface POPViewController ()

@end

@implementation POPViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    [POPDropboxLib doit];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
