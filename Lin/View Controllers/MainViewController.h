//
//  MainViewController.h
//  Lin
//
//  Created by Sascha Schwabbauer on 03/12/14.
//  Copyright (c) 2014 evolved.io. All rights reserved.
//

#import <Cocoa/Cocoa.h>

extern NSString * const LNPopoverContentViewLocalizationKey;

extern NSString * const LNPopoverContentViewLocalizationDidSelectNotification;
extern NSString * const LNPopoverContentViewDetachButtonDidClickNotification;

@interface MainViewController : NSViewController

@property (nonatomic, assign, getter=isInPopover) BOOL inPopover;
@property (nonatomic, weak, readonly) NSTableView *tableView;
@property (nonatomic, copy) NSArray *collections;
@property (nonatomic, copy) NSString *searchString;

@end
