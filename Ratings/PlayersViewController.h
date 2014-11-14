//
//  PlayersTableViewController.h
//  Ratings
//
//  Created by crossmo/yangcun on 14/11/13.
//  Copyright (c) 2014年 crossmo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;


@end
