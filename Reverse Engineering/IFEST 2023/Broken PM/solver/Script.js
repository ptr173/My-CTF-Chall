Java.perform(function() {
    var a = Java.use('com.ifest.passmanager.detectors.EmulatorDetection');
    a.isEmulator.implementation = function (){
        return false;
    };

    var b = Java.use('com.ifest.passmanager.detectors.RootDetection');
    b.isDeviceRooted.implementation = function (){
        return false;
    }

    var newLatitude = 2485268;
    var newLongitude = 2653599;

    var GetLocation = Java.use("com.ifest.passmanager.utils.GetLocationUtils");
    
    GetLocation.latitude.value = newLatitude;
    GetLocation.longitude.value = newLongitude;
});

