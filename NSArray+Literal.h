//
//  NSArray+Literal.h
//
//  Created by Rex Sheng on 9/17/12.
//  Copyright (c) 2012 Log(n) LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Literal)

- (id)objectAtIndexedSubscript:(NSUInteger)index;

@end

@interface NSMutableArray (Literal)

- (void)setObject:(id)object atIndexedSubscript:(NSUInteger)index;

@end