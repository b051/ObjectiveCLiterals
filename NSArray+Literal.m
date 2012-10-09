//
//  NSArray+Literal.m
//
//  Created by Rex Sheng on 9/17/12.
//  Copyright (c) 2012 Log(n) LLC. All rights reserved.
//

#import "NSArray+Literal.h"

@implementation NSArray (Literal)

- (id)objectAtIndexedSubscript:(NSUInteger)index
{
	return [self objectAtIndex:index];
}

@end

@implementation NSMutableArray (Literal)

- (void)setObject:(id)object atIndexedSubscript:(NSUInteger)index
{
	[self replaceObjectAtIndex:index withObject:object];
}

@end