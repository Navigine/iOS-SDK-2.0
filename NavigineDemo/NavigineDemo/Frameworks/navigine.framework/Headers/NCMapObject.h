// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from map_object.djinni

#import "NCExport.h"
#import "NCMapObjectType.h"
#import <Foundation/Foundation.h>


NAVIGINE_EXPORT
@interface NCMapObject : NSObject

- (int32_t)getId;

- (NCMapObjectType)getType;

- (nonnull NSData *)getData;

- (BOOL)setVisible:(BOOL)visible;

- (BOOL)setColor:(float)red
           green:(float)green
            blue:(float)blue
           alpha:(float)alpha;

- (BOOL)setInteractive:(BOOL)interactive;

- (void)setData:(nonnull NSData *)data;

@end
