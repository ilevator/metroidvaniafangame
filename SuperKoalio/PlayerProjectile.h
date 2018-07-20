//
//  PlayerProjectile.h
//  SuperKoalio
//
//  Created by nick vancise on 5/25/18.
//  Copyright © 2018 Razeware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SpriteKit/SpriteKit.h>

@interface PlayerProjectile : SKSpriteNode

@property (nonatomic,assign) BOOL cleanup;
-(instancetype)initWithPos:(CGPoint)pos andDirection:(BOOL) direction;

@end
