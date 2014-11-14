//
//  PlayerCell.h
//  Ratings
//
//  Created by crossmo/yangcun on 14/11/14.
//  Copyright (c) 2014年 crossmo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell


@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;


@end
