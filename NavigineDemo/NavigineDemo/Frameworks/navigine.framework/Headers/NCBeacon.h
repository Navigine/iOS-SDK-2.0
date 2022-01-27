#import "NCExport.h"
#import "NCPoint.h"
#import <Foundation/Foundation.h>


NAVIGINE_EXPORT
@interface NCBeacon : NSObject

@property (nonatomic, nonnull, readonly) NCPoint * point;

@property (nonatomic, readonly) int32_t locationId;

@property (nonatomic, readonly) int32_t sublocationId;

@property (nonatomic, nonnull, readonly) NSString * name;

@property (nonatomic, readonly) int32_t major;

@property (nonatomic, readonly) int32_t minor;

@property (nonatomic, nonnull, readonly) NSString * uuid;

@property (nonatomic, nullable, readonly) NSNumber * power;

@end
