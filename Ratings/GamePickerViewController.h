//
//  GamePickerViewController.h
//  Ratings
//
//  Created by crossmo/yangcun on 14/11/17.
//  Copyright (c) 2014年 crossmo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GamePickerViewController;
@protocol GamePickerViewControllerDelegate <NSObject>

- (void)gamePickerViewController:(GamePickerViewController *)controller didSelectGame:(NSString *)game;

@end

@interface GamePickerViewController : UITableViewController

@property (nonatomic,weak) id <GamePickerViewControllerDelegate> delegate;
@property (nonatomic,strong) NSString *game;

@end
