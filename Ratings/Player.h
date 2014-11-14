//
//  Player.h
//  Ratings
//
//  Created by crossmo/yangcun on 14/11/13.
//  Copyright (c) 2014年 crossmo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject


@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
