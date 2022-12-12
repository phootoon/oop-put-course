
public class Main {

    public static void main(String[] args) {


        Forecast forecast = new Forecast.FakeForecast();
        Weather weather = new Weather(forecast);
        int temperature = weather.currentTemperature();
    }
}
