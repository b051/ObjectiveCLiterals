//
//  NSDictionary+Literal.h
//
//  Created by Rex Sheng on 9/17/12.
//  Copyright (c) 2012 Log(n) LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Literal)

- (id)objectForKeyedSubscript:(id)aKey;

@end

@interface NSMutableDictionary (Literal)

- (void)setObject:(id)value forKeyedSubscript:(id)key;

@end