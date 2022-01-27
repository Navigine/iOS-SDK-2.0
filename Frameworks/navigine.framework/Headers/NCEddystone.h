#import "NCExport.h"
#import "NCPoint.h"
#import <Foundation/Foundation.h>


NAVIGINE_EXPORT
@interface NCEddystone : NSObject

@property (nonatomic, nonnull, readonly) NCPoint * point;

@property (nonatomic, readonly) int32_t locationId;

@property (nonatomic, readonly) int32_t sublocationId;

@property (nonatomic, nonnull, readonly) NSString * name;

@property (nonatomic, nonnull, readonly) NSString * namespaceId;

@property (nonatomic, nonnull, readonly) NSString * instanceId;

@property (nonatomic, nullable, readonly) NSNumber * power;

@end
