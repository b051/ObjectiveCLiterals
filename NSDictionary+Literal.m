//
//  NSDictionary+Literal.m
//
//  Created by Rex Sheng on 9/17/12.
//  Copyright (c) 2012 Log(n) LLC. All rights reserved.
//

#import "NSDictionary+Literal.h"

@implementation NSDictionary (Literal)

- (id)objectForKeyedSubscript:(id)aKey
{
	return [self objectForKey:aKey];
}

@end

@implementation NSMutableDictionary (Literal)

- (void)setObject:(id)value forKeyedSubscript:(id)key
{
	if (!value) [self removeObjectForKey:key];
	else [self setObject:value forKey:key];
}

@end
