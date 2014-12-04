//
//  Creature.m
//  GameOfLife
//
//  Created by Casey Michael Gross on 12/3/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "Creature.h"

@implementation Creature

- (instancetype)initCreature {
    
    self = [super initWithImageNamed:@"GameOfLifeAssets/Assets/bubble.png"];
    
    if(self)
    {
        self.isAlive = NO;
    }
    return self;
}

- (void)setIsAlive:(BOOL)newState
{
    _isAlive = newState;
    
    self.visible = _isAlive;
}

@end
