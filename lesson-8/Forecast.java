public interface Forecast {
    int currentTemperature();
    public class FakeForecast implements Forecast {
        @Override
        public int currentTemperature() {
            return 70;  // Always returns 70 degrees
        }
    }
}