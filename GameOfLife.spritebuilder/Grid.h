//
//  Grid.h
//  GameOfLife
//
//  Created by Casey Michael Gross on 12/3/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;

@property (nonatomic, assign) int generation;

-(id)evolveStep;

@end
