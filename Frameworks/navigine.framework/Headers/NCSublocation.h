#import "NCGlobalPoint.h"
#import "NCLocationPoint.h"
#import <Foundation/Foundation.h>
@class NCBeacon;
@class NCEddystone;
@class NCGraph;
@class NCReferencePoint;
@class NCVenue;
@class NCWifi;
@class NCZone;


@interface NCSublocation : NSObject

- (nonnull NCLocationPoint *)globalToLocal:(nonnull NCGlobalPoint *)globalPoint;

- (nonnull NCGlobalPoint *)localToGlobal:(nonnull NCLocationPoint *)localPoint;

- (nullable NCGraph *)getGraph:(nonnull NSString *)tag;

- (nullable NCVenue *)getVenueById:(int32_t)id;

- (nullable NCZone *)getZoneById:(int32_t)id;

@property (nonatomic, readonly) int32_t id;

@property (nonatomic, readonly) int32_t location;

@property (nonatomic, nonnull, readonly) NSString * name;

@property (nonatomic, nonnull, readonly) NSString * imageId;

@property (nonatomic, readonly) float width;

@property (nonatomic, readonly) float height;

@property (nonatomic, readonly) float azimuth;

@property (nonatomic, nonnull, readonly) NCGlobalPoint * originPoint;

@property (nonatomic, nonnull, readonly) NSArray<NCBeacon *> * beacons;

@property (nonatomic, nonnull, readonly) NSArray<NCEddystone *> * eddystones;

@property (nonatomic, nonnull, readonly) NSArray<NCWifi *> * wifis;

@property (nonatomic, nonnull, readonly) NSArray<NCReferencePoint *> * referencePoints;

@property (nonatomic, nonnull, readonly) NSArray<NCVenue *> * venues;

@property (nonatomic, nonnull, readonly) NSArray<NCZone *> * zones;

@end
