#import "NCPolygon.h"
#import <Foundation/Foundation.h>


@interface NCZone : NSObject

@property (nonatomic, nonnull, readonly) NCPolygon * polygon;

@property (nonatomic, readonly) int32_t locationId;

@property (nonatomic, readonly) int32_t sublocationId;

@property (nonatomic, readonly) int32_t id;

@property (nonatomic, nonnull, readonly) NSString * name;

@property (nonatomic, nonnull, readonly) NSString * color;

@property (nonatomic, nonnull, readonly) NSString * alias;

@end
