//
//  MasterViewController.h
//  test
//
//  Created by 이병철 on 13. 9. 6..
//  Copyright (c) 2013년 이병철. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
