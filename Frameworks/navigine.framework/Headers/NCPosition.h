#import "NCPoint.h"
#import <Foundation/Foundation.h>

@interface NCPosition : NSObject
- (nonnull instancetype)initWithPoint:(nonnull NCPoint *)point
                           locationId:(int32_t)locationId
                        sublocationId:(int32_t)sublocationId
                             accuracy:(float)accuracy
                              azimuth:(float)azimuth;
+ (nonnull instancetype)positionWithPoint:(nonnull NCPoint *)point
                               locationId:(int32_t)locationId
                            sublocationId:(int32_t)sublocationId
                                 accuracy:(float)accuracy
                                  azimuth:(float)azimuth;

@property (nonatomic, readonly, nonnull) NCPoint * point;

@property (nonatomic, readonly) int32_t locationId;

@property (nonatomic, readonly) int32_t sublocationId;

@property (nonatomic, readonly) float accuracy;

@property (nonatomic, readonly) float azimuth;

@end
