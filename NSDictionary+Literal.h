//
//  NSDictionary+Literal.h
//
//  Created by Rex Sheng on 9/17/12.
//  Copyright (c) 2012 Log(n) LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Literal)

/*!
 * In LLVM 4.0 (XCode 4.5) or higher allows myPFObject[key].
 @param key The key.
 */
- (id)objectForKeyedSubscript:(id)aKey;

@end

@interface NSMutableDictionary (Literal)

/*!
 In LLVM 4.0 (XCode 4.5) or higher allows myObject[key] = value
 @param object The object.
 @param key The key.
 */
- (void)setObject:(id)value forKeyedSubscript:(id)key;

@end