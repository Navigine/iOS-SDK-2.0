#import "NCPoint.h"
#import <Foundation/Foundation.h>
@protocol NCLocationEditListener;


@interface NCLocationEditManager : NSObject

- (void)addBeacon:(int32_t)subLocId
             uuid:(nonnull NSString *)uuid
            major:(int32_t)major
            minor:(int32_t)minor
            point:(nonnull NCPoint *)point
             name:(nonnull NSString *)name
            power:(int32_t)power;

- (void)editBeacon:(int32_t)subLocId
              uuid:(nonnull NSString *)uuid
             major:(int32_t)major
             minor:(int32_t)minor
             point:(nonnull NCPoint *)point
              name:(nonnull NSString *)name
             power:(int32_t)power;

- (void)removeBeacon:(int32_t)subLocId
                uuid:(nonnull NSString *)uuid
               major:(int32_t)major
               minor:(int32_t)minor;

- (void)addEddystone:(int32_t)subLocId
         namespaceId:(nonnull NSString *)namespaceId
          instanceId:(nonnull NSString *)instanceId
               point:(nonnull NCPoint *)point
                name:(nonnull NSString *)name
               power:(int32_t)power;

- (void)editEddystone:(int32_t)subLocId
          namespaceId:(nonnull NSString *)namespaceId
           instanceId:(nonnull NSString *)instanceId
                point:(nonnull NCPoint *)point
                 name:(nonnull NSString *)name
                power:(int32_t)power;

- (void)removeEddystone:(int32_t)subLocId
            namespaceId:(nonnull NSString *)namespaceId
             instanceId:(nonnull NSString *)instanceId;

- (void)addWifi:(int32_t)subLocId
            mac:(nonnull NSString *)mac
          point:(nonnull NCPoint *)point
           name:(nonnull NSString *)name;

- (void)editWifi:(int32_t)subLocId
             mac:(nonnull NSString *)mac
           point:(nonnull NCPoint *)point
            name:(nonnull NSString *)name;

- (void)removeWifi:(int32_t)subLocId
               mac:(nonnull NSString *)mac;

- (void)addWifiRtt;

- (void)editWifiRtt;

- (void)removeWifiRtt:(int32_t)subLocId
                  mac:(nonnull NSString *)mac;

- (void)addLocationEditListener:(nullable id<NCLocationEditListener>)locationEditListener;

- (void)removeLocationEditListener:(nullable id<NCLocationEditListener>)locationEditListener;

- (void)commitChanges;

@end
