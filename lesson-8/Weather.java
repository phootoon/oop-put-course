public class Weather {
    private Forecast forecast;

    public Weather(Forecast forecast) {
        this.forecast = forecast;
    }

    public int currentTemperature() {
        return forecast.currentTemperature();
    }
}
