// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from global_point.djinni

#import "NCExport.h"
#import <Foundation/Foundation.h>

NAVIGINE_EXPORT
@interface NCGlobalPoint : NSObject
- (nonnull instancetype)initWithLatitude:(float)latitude
                               longitude:(float)longitude;
+ (nonnull instancetype)globalPointWithLatitude:(float)latitude
                                      longitude:(float)longitude;

@property (nonatomic, readonly) float latitude;

@property (nonatomic, readonly) float longitude;

@end
