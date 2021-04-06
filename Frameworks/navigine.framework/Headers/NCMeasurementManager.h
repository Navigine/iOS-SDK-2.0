#import <Foundation/Foundation.h>
@protocol NCMeasurementListener;


@interface NCMeasurementManager : NSObject

- (void)addMeasurementListener:(nullable id<NCMeasurementListener>)listener;

- (void)removeMeasurementListener:(nullable id<NCMeasurementListener>)listener;

- (int32_t)addBeaconGenerator:(nonnull NSString *)uuid
                        major:(int32_t)major
                        minor:(int32_t)minor
                        power:(int32_t)power
                      timeout:(int32_t)timeout
                      rssiMin:(int32_t)rssiMin
                      rssiMax:(int32_t)rssiMax;

- (void)removeBeaconGenerator:(int32_t)hash;

- (void)removeBeaconGenerators;

- (int32_t)addEddystoneGenerator:(nonnull NSString *)namespaceId
                      instanceId:(nonnull NSString *)instanceId
                           power:(int32_t)power
                         timeout:(int32_t)timeout
                         rssiMin:(int32_t)rssiMin
                         rssiMax:(int32_t)rssiMax;

- (void)removeEddystoneGenerator:(int32_t)hash;

- (void)removeEddystoneGenerators;

- (int32_t)addWifiGenerator:(nonnull NSString *)mac
                    timeout:(int32_t)timeout
                    rssiMin:(int32_t)rssiMin
                    rssiMax:(int32_t)rssiMax;

- (void)removeWifiGenerator:(int32_t)hash;

- (void)removeWifiGenerators;

- (int32_t)addWifiRttGenerator:(nonnull NSString *)mac
                      distance:(float)distance
                       timeout:(int32_t)timeout
                       rssiMin:(int32_t)rssiMin
                       rssiMax:(int32_t)rssiMax;

- (void)removeWifiRttGenerator:(int32_t)hash;

- (void)removeWifiRttGenerators;

@end
