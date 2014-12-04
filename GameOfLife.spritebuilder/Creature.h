//
//  Creature.h
//  GameOfLife
//
//  Created by Casey Michael Gross on 12/3/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

@property (nonatomic, assign) BOOL isAlive;

@property (nonatomic, assign) NSInteger livingNeighors;

- (id)initCreature;

@end
